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

class StackLinkedList {
private:
    Node* top;

public:
    StackLinkedList() {
        top = nullptr;
    }

    ~StackLinkedList() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

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
