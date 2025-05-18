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
