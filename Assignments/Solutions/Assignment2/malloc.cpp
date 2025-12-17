#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Allocate array using malloc
    int *arr = (int*)malloc(5 * sizeof(int));

    // Check if memory allocated
    if (!arr) {
        cout << "Memory allocation failed!";
        return 1;
    }

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
    free(arr);

    return 0;
}
