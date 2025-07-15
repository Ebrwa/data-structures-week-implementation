#include <iostream>
using namespace std;

// Stack implementation using an array
class StackArray {
private:
    int* stack;     // Pointer to array hold stack elements
    int top;        // Index of the top element in the stack
    int capacity;   // Maximum number of elements the stack can hold

public:
    // Constructor initializes the stack with a capacity
    StackArray(int size = 100) {
        capacity = size;
        stack = new int[capacity];
        top = -1; 
    }

    // Destructor deallocates the memory used by the array
    ~StackArray() {
        delete[] stack;
    }

    // Pushes a value onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        stack[++top] = value; 
    }

    // Removes the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--; // Just moving the top pointer down
    }

    // Returns the top element without removing it
    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return stack[top];
    }

    // Checks if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Checks if the stack is full
    bool isFull() const {
        return top == capacity - 1;
    }

    // Displays all data in the stack from top to bottom
    void display() const {
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
};
