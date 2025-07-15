#include <iostream>
using namespace std;

// Node structure for the queue
template <typename T>
struct Node {
    T value;
    Node<T>* next;
    Node(T val) : value(val), next(nullptr) {}
};

// Queue class using linked list
template <typename T>
class QueueLinkedList {
private:
    Node<T>* front; // point to the front element
    Node<T>* back;  // point to the rear element
    int count;

public:
    QueueLinkedList() : front(nullptr), back(nullptr), count(0) {}

    ~QueueLinkedList() {
        while (!isEmpty()) {
            dequeue(); // remove all elements
        }
    }

    // Add element to the end
    void enqueue(T val) {
        Node<T>* node = new Node<T>(val);
        if (isEmpty()) {
            front = back = node;
        }
        else {
            back->next = node;
            back = node;
        }
        count++;
    }

    // Remove and return the front element
    T dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return T();
        }
        T val = front->value;
        Node<T>* temp = front;
        front = front->next;
        delete temp;
        count--;

        // If the queue becomes empty after removing
        if (!front) back = nullptr;

        return val;
    }

    // Look at the front without removing
    T peek() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return T();
        }
        return front->value;
    }

    
    bool isEmpty() {
        return count == 0;
    }

    
    int size() {
        return count;
    }

    // Remove all elements
    void clear() {
        while (!isEmpty()) dequeue();
    }

    // Print the queue from front to back
    void print() {
        Node<T>* temp = front;
        cout << "[ ";
        while (temp) {
            cout << temp->value;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << " ]\n";
    }
};

int main() {
    QueueLinkedList<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.print();

    cout << "Peek: " << q.peek() << endl;
    cout << "Size: " << q.size() << endl;

    q.clear();
    cout << "After clearing: ";
    q.print();

    return 0;
}
