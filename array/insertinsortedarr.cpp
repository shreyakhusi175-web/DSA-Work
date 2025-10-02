#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to insert: ";
    cin >> key;

    int i;
    
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key; 
    n++; 

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
