#include <iostream>
using namespace std;

// Node structure for the circular linked list
template <typename T>
struct Node {
    T value;
    Node<T>* next;
    Node(T val) : value(val), next(nullptr) {}
};

// Circular linked list class
template <typename T>
class CircularLinkedList {
private:
    Node<T>* tail; // we only keep track of the tail
    int count;

public:
    CircularLinkedList() : tail(nullptr), count(0) {}

    ~CircularLinkedList() {
        while (!isEmpty()) {
            removeFront(); // remove all nodes 
        }
    }

    // Add an element at the end
    void addBack(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (!tail) {
            // first node points to itself
            tail = newNode;
            tail->next = newNode;
        }
        else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode; // update tail
        }
        count++;
    }

    // Add an element at the front
    void addFront(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (!tail) {
            tail = newNode;
            tail->next = newNode;
        }
        else {
            newNode->next = tail->next;
            tail->next = newNode;
        }
        count++;
    }

    // Remove the first node and return its value
    T removeFront() {
        if (isEmpty()) {
            cout << "List is empty.\n";
            return T();
        }

        Node<T>* front = tail->next;
        T val = front->value;

        if (front == tail) {
            // only one node in the list
            delete front;
            tail = nullptr;
        }
        else {
            tail->next = front->next;
            delete front;
        }

        count--;
        return val;
    }

    // Check if a value exists in the list
    bool contains(T val) {
        if (isEmpty()) return false;

        Node<T>* current = tail->next;
        do {
            if (current->value == val) return true;
            current = current->next;
        } while (current != tail->next); // looping back to start

        return false;
    }

    // Check if the list is empty
    bool isEmpty() {
        return count == 0;
    }

    // Remove all elements from the list
    void clear() {
        while (!isEmpty()) removeFront();
    }

    // Display the contents of the list
    void display() {
        if (isEmpty()) {
            cout << "[empty]\n";
            return;
        }

        Node<T>* current = tail->next;
        cout << "[ ";
        do {
            cout << current->value << " ";
            current = current->next;
        } while (current != tail->next);
        cout << "]\n";
    }

    // Return how many items in the list
    int size() {
        return count;
    }
};

int main() {
    CircularLinkedList<int> list;

    list.addBack(100);
    list.addFront(50);
    list.addBack(200);
    list.display();

    cout << "Removed front: " << list.removeFront() << endl;
    list.display();

    cout << "Contains 200? " << (list.contains(200) ? "Yes" : "No") << endl;

    list.clear();
    list.display();
}
