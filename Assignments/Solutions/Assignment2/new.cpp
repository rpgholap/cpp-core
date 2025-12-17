#include <iostream>
using namespace std;

int main() {
    // Allocate array of 5 integers
    int *arr = new int[5];

    // Input values
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Print values
    cout << "You entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}
