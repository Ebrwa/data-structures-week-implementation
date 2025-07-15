#include <iostream>
using namespace std;

// Class that implements a dynamic array that resizes as needed
class DynamicArray {
private:
    int* data;      // Pointer to the actual array in heap memory
    int size;       
    int capacity;   

    // Private helper function to resize the array when needed
    void resize(int newCapacity) {
        int* newData = new int[newCapacity];     // Create new array with new capacity
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];                // Copy elements to the new array
        }
        delete[] data;                           // Free old memory
        data = newData;                          
        capacity = newCapacity;                  
    }

public:
    // Constructor initializes array with capacity of 2
    DynamicArray() {
        data = new int[2];
        size = 0;
        capacity = 2;
    }

    // Destructor frees dynamically allocated memory
    ~DynamicArray() {
        delete[] data;
    }

    // Adds a value to the end of the array
    void push(int value) {
        if (size == capacity) {
            resize(capacity * 2);    // Double the capacity when its full
        }
        data[size++] = value;
    }

    // Remove the last element from the array
    void pop() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }
        size--;
        // Shrink the array if its only a quarter full
        if (size > 0 && size == capacity / 4) {
            resize(capacity / 2);
        }
    }

    // Returns the element at a given index
    int get(int index) const {
        if (index < 0 || index >= size) {
            cerr << "Index out of bounds.\n";
            return -1;
        }
        return data[index];
    }

    // Prints all elements in the array
    void print() const {
        cout << "Array: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << "\n";
    }

    // Return the number of elements in the array
    int getSize() const {
        return size;
    }

    // Returns the current capacity of the array
    int getCapacity() const {
        return capacity;
    }
};
