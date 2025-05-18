// #include <iostream>
// using namespace std;

// class ArrayADT {
// private:
//     int* arr;        // pointer to the array
//     int capacity;    // total size of array
//     int size;        // current number of elements

// public:
//     // Constructor
//     ArrayADT(int cap) {
//         capacity = cap;
//         arr = new int[capacity];
//         size = 0;
//     }

//     // Destructor
//     ~ArrayADT() {
//         delete[] arr;
//     }

//     // Insert at end
//     void insert(int element) {
//         if (size < capacity) {
//             arr[size] = element;
//             size++;
//         } else {
//             cout << "Array is full. Cannot insert." << endl;
//         }
//     }

//     // Insert at specific position
//     void insertAt(int index, int element) {
//         if (size >= capacity) {
//             cout << "Array is full. Cannot insert." << endl;
//             return;
//         }
//         if (index < 0 || index > size) {
//             cout << "Invalid index." << endl;
//             return;
//         }
//         for (int i = size; i > index; i--) {
//             arr[i] = arr[i - 1];
//         }
//         arr[index] = element;
//         size++;
//     }

//     // Delete from specific position
//     void removeAt(int index) {
//         if (index < 0 || index >= size) {
//             cout << "Invalid index." << endl;
//             return;
//         }
//         for (int i = index; i < size - 1; i++) {
//             arr[i] = arr[i + 1];
//         }
//         size--;
//     }

//     // Update element at specific position
//     void update(int index, int newValue) {
//         if (index < 0 || index >= size) {
//             cout << "Invalid index." << endl;
//             return;
//         }
//         arr[index] = newValue;
//     }

//     // Display elements
//     void display() {
//         if (size == 0) {
//             cout << "Array is empty." << endl;
//             return;
//         }
//         cout << "Array Elements: ";
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
#include <iostream>
using namespace std;
void insertatbeginning(int arr[], int& n, int item) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = item;
    n++;
}
void insertatend(int arr[], int& n, int item) {
    arr[n] = item;
    n++;
}

void insertatposition(int arr[], int& n, int item, int pos) {
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = item;
    n++;
}

int main() {
    int n;
    cout << "enter number of elements in the array:\n";
    cin >> n;
    int arr[100]; // Use a fixed size for safety
    cout << "enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int item, pos;
    cout << "enter item to insert in the array:\n";
    cin >> item;
    cout << "enter position to insert the item in the array:\n";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position.\n";
        return 1;
    }

    if (pos == 0) {
        insertatbeginning(arr, n, item);
    } else if (pos == n) {
        insertatend(arr, n, item);
    } else {
        insertatposition(arr, n, item, pos);
    }

    cout << "the final array after insertion is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}