#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;   // dynamic array
    int size;   // size of the array

public:
    // Constructor to initialize array with a given size
    Vector(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = 0; // initialize elements to 0
    }

    // Destructor to free dynamic memory
    ~Vector() {
        delete[] arr;
    }

    // Overloaded index operator [] for accessing elements
    int& operator[](int index) {
        if (index >= 0 && index < size)
            return arr[index];
        else {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
    }

    // Overloaded function-call operator () to return sum of elements
    int operator()() {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return sum;
    }

    // Getter for size (optional)
    int getSize() {
        return size;
    }
};

int main() {
    // Initialize vector object with size 5
    Vector v(5);

    // Aggregate-like initialization is not directly possible here because we use dynamic memory.
    // But we can set elements individually:
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;

    // Demonstrate usage
    v[2] = 50;               // changing 3rd element
    cout << "Sum of all elements: " << v() << endl;  // compute sum using ()

    return 0;
}
