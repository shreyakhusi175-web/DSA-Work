#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array (n-1 elements for numbers 1 to n): ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int sumArr = 0;
    for (int i = 0; i < n - 1; i++) {
        sumArr += arr[i];
    }

 
    int totalSum = n * (n + 1) / 2;

 
    int missing = totalSum - sumArr;
    cout << "The missing number is: " << missing << endl;

    return 0;
}