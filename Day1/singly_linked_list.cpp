#include <iostream>
using namespace std;

// Node class represents each node in the linked list
class Node {
public:
    int data;       // Hold the value
    Node* next;     // Pointer to the next node

    // Constructor to initialize a node with a value// and next set to nullptr
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Singly Linked List class
class SinglyLinkedList {
private:
    Node* head;     // Pointer to the first node 

public:
    // Constructor initializes an empty list
    SinglyLinkedList() {
        head = nullptr;
    }

    // Destructor deallocates all nodes 
    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    // Inserts a new node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        // If the list is empty new node becomes the head
        if (head == nullptr) {
            head = newNode;
            return;
        }

        // Traverse to the end of the list
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        // Link new node at the end
        current->next = newNode;
    }

    // Deletes the first node that contains the specified value
    void deleteByValue(int value) {
        if (head == nullptr) return; // Empty list so nothing to delete

        // If the head node holds the value to be deleted
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Traverse the list to find the node to delete
        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        // If found, delete the node
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }

    // Prints all the values in the list
    void display() const {
        Node* current = head;
        cout << "List: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }

    // Search for a value in the list return true if found
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
