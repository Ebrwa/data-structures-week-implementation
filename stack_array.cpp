#include <iostream>
using namespace std;

class StackArray {
private:
    int* stack;
    int top;
    int capacity;

public:
    StackArray(int size = 100) {
        capacity = size;
        stack = new int[capacity];
        top = -1;
    }

    ~StackArray() {
        delete[] stack;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        stack[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return stack[top];
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }

    void display() const {
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
};
