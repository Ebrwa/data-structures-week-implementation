#include <iostream>
using namespace std;

// Queue implemented using an array which is (circular buffer)
template <typename T>
class QueueArray {
private:
    T* data;
    int capacity;
    int frontIndex;
    int rearIndex;
    int count;

public:
    // Constructor 
    QueueArray(int size = 8) {
        capacity = size;
        data = new T[capacity];
        frontIndex = 0;
        rearIndex = 0;
        count = 0;
    }

    // Destructor 
    ~QueueArray() {
        delete[] data;
    }

    // Add an element to the back of the queue
    void enqueue(T val) {
        if (count == capacity) {
            cout << "Queue is full.\n";
            return;
        }
        data[rearIndex] = val;
        rearIndex = (rearIndex + 1) % capacity;
        count++;
    }

    // Remove and return the front element
    T dequeue() {
        if (isEmpty()) {
            cout << "Nothing to remove.\n";
            return T(); // return default value
        }
        T val = data[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        count--;
        return val;
    }

    // Look at the front without removing it
    T peek() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return T();
        }
        return data[frontIndex];
    }

    // Check if the queue is empty
    bool isEmpty() {
        return count == 0;
    }

    // Get number of elements
    int size() {
        return count;
    }

    // Reset the queue (without deleting the array)
    void clear() {
        frontIndex = rearIndex = count = 0;
    }

    // display the elements in the queue
    void print() {
        cout << "[ ";
        for (int i = 0; i < count; i++) {
            cout << data[(frontIndex + i) % capacity];
            if (i != count - 1) cout << ", ";
        }
        cout << " ]\n";
    }
};

int main() {
    QueueArray<int> q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.print();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.print();

    cout << "Peek: " << q.peek() << endl;
    cout << "Size: " << q.size() << endl;

    q.clear();
    cout << "After clear: ";
    q.print();

    return 0;
}
