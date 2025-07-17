#include <iostream>
#include <queue>
using namespace std;

// MinHeap implemented
class MinHeap {
private:
    priority_queue<int, vector<int>, greater<int>> heap; 



public:
    // Insert new value into heap
    void insert(int value) {
    heap.push(value);
    }

    // Remove the smallest (top) value
    void removeMin() {
        if (!heap.empty()) {
         heap.pop();
        }
    }

    // Get the smallest value without removing it
    int getMin() const {
        return heap.empty() ? -1 : heap.top();
    }

    // Print current heap content
    void printHeap() {
        priority_queue<int, vector<int>, greater<int>> temp = heap;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    MinHeap h;

    h.insert(8);
    h.insert(3);
    h.insert(5);
    h.insert(1);
    cout << "Heap elements: ";
    h.printHeap();
    cout << "Minimum: " << h.getMin() << endl;
    h.removeMin();
    cout << "After removing min: ";
    h.printHeap();
    return 0;
}
