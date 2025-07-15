#include <iostream>
using namespace std;

// Node class represents an element in the linked list
class Node {
public:
    int data;       // Hold the value of the node
    Node* next;     // Pointer for the next node

    // Constructor to initialize a node with a given value
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack implementation using Linked List
class StackLinkedList {
private:
    Node* top;  // Points to the top of the stack

public:
    // Constructor initializes the stack as empty
    StackLinkedList() {
        top = nullptr;
    }

    // Destructor pops all elements to free memory
    ~StackLinkedList() {
        while (!isEmpty()) {
            pop();
        }
    }

    // Pushes a value into the stack . at the top
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top; 
        top = newNode;       // Top is now the new node
    }

    // Pops the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Returns the value at the top of the stack without removing it
    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Checks if the stack is empty
    bool isEmpty() const {
        return top == nullptr;
    }

    // Displays the data of the stack from top to bottom
    void display() const {
        cout << "Stack (top to bottom): ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
};
