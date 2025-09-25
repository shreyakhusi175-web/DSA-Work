#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAtEveryPosition(int arr[], int& size, int capacity, int element) {
    if (size == capacity) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    for (int i = 0; i <= size; i++) {
        // Shift elements to the right
        for (int j = size; j > i; j--) {
            arr[j] = arr[j - 1];
        }
        // Insert element at position i
        arr[i] = element;
        cout << "Inserting " << element << " at position " << i << ": ";
        printArray(arr, size + 1);
        // Shift elements back to original position
        for (int j = i; j < size; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size] = 0; // Reset last element
    }
}

int main() {
    int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;

    cout << "Original array: ";
    printArray(arr, size);

    insertAtEveryPosition(arr, size, capacity, element);

    return 0;
}