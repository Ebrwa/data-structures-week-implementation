#include <iostream>
using namespace std;

// Basic node for doubly linked list
template <typename T>
struct Node {
    T value;
    Node<T>* next;
    Node<T>* prev;
    Node(T val) : value(val), next(nullptr), prev(nullptr) {}
};

// Doubly linked list class
template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int length;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), length(0) {}

    // Cleaning the memory
    ~DoublyLinkedList() {
        Node<T>* current = head;
        while (current) {
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Add to the end
    void append(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (!head) {
            // First element
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        length++;
    }

    // Add to the front
    void prepend(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (!head) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        length++;
    }

    // Remove from front and return value
    T removeFront() {
        if (!head) return T(); // nothing to remove
        T val = head->value;
        Node<T>* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr; // list is empty
        delete temp;
        length--;
        return val;
    }

    // Remove from end and return value
    T removeBack() {
        if (!tail) return T();
        T val = tail->value;
        Node<T>* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        delete temp;
        length--;
        return val;
    }

    // Check if list is empty
    bool isEmpty() {
        return length == 0;
    }

    // Get number of items
    int size() {
        return length;
    }

    // Print the list from front to back
    void print() {
        Node<T>* temp = head;
        cout << "[ ";
        while (temp) {
            cout << temp->value;
            if (temp->next) cout << " <-> ";
            temp = temp->next;
        }
        cout << " ]\n";
    }

    // Check if value exists
    bool contains(T val) {
        Node<T>* temp = head;
        while (temp) {
            if (temp->value == val) return true;
            temp = temp->next;
        }
        return false;
    }
};

// main function to test the list
int main() {
    DoublyLinkedList<int> dll;
    dll.append(10);
    dll.append(20);
    dll.prepend(5);
    dll.print();

    cout << "Removed front: " << dll.removeFront() << endl;
    cout << "Removed back: " << dll.removeBack() << endl;
    dll.print();

    cout << "Contains 10? " << (dll.contains(10) ? "Yes" : "No") << endl;

    return 0;
}
