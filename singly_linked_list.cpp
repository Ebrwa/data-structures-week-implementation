#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    void deleteByValue(int value) {
        if (head == nullptr) return;

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }

    void display() const {
        Node* current = head;
        cout << "List: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }

    bool search(int value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value)
                return true;
            current = current->next;
        }
        return false;
    }
};
