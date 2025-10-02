#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Repeated elements: ";
    for (int i = 0; i < n; i++) {
        bool repeated = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                repeated = true;
                break;
            }
        }
        if (repeated) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Non-repeated elements: ";
    for (int i = 0; i < n; i++) {
        bool repeated = false;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                repeated = true;
                break;
            }
        }
        if (!repeated) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;}
