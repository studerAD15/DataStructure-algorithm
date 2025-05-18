#include <iostream>
using namespace std;

class ArrayADT {
private:
    int* arr;        // pointer to the array
    int capacity;    // total size of array
    int size;        // current number of elements

public:
    // Constructor
    ArrayADT(int cap) {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
    }

    // Destructor
    ~ArrayADT() {
        delete[] arr;
    }

    // Insert at end
    void insert(int element) {
        if (size < capacity) {
            arr[size] = element;
            size++;
        } else {
            cout << "Array is full. Cannot insert." << endl;
        }
    }

    // Insert at specific position
    void insertAt(int index, int element) {
        if (size >= capacity) {
            cout << "Array is full. Cannot insert." << endl;
            return;
        }
        if (index < 0 || index > size) {
            cout << "Invalid index." << endl;
            return;
        }
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
    }

    // Delete from specific position
    void removeAt(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index." << endl;
            return;
        }
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    // Update element at specific position
    void update(int index, int newValue) {
        if (index < 0 || index >= size) {
            cout << "Invalid index." << endl;
            return;
        }
        arr[index] = newValue;
    }

    // Display elements
    void display() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }
        cout << "Array Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
