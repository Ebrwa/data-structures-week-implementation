#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;
    int capacity;

    void resize(int newCapacity) {
        int* newData = new int[newCapacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    DynamicArray() {
        data = new int[2];
        size = 0;
        capacity = 2;
    }

    ~DynamicArray() {
        delete[] data;
    }

    void push(int value) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        data[size++] = value;
    }

    void pop() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }
        size--;
        if (size > 0 && size == capacity / 4) {
            resize(capacity / 2);
        }
    }

    int get(int index) const {
        if (index < 0 || index >= size) {
            cerr << "Index out of bounds.\n";
            return -1;
        }
        return data[index];
    }

    void print() const {
        cout << "Array: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << "\n";
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }
};
