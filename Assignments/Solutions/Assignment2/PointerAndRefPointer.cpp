
// Pointers can be NULL, can re-point, and require dereferencing.

// References cannot be NULL, cannot be reseated, and act like aliases.

// References must bind to a valid object at initialization, so they cannot change or be empty.

#include <iostream>
using namespace std;

int main() {
    int num = 10;

    // Pointer to num
    int *ptr = &num;

    // Reference to num
    int &ref = num;

    cout << "Original value: " << num << endl;

    // Modify using pointer
    *ptr = 20;
    cout << "After modifying using pointer: " << num << endl;

    // Modify using reference
    ref = 30;
    cout << "After modifying using reference: " << num << endl;

    return 0;
}
