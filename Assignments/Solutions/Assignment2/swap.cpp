#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Original values: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y 
         << "  (No change)" << endl;

    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << ", y = " << y 
         << "  (Swapped)" << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y 
         << "  (Swapped again)" << endl;

    return 0;
}
