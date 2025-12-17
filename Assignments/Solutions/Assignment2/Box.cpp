#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Parameterized constructor
    Box(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Setter function using this->
    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Function to calculate volume
    int volume() {
        return length * width * height;
    }
};

int main() {
    // Initialize using constructor
    Box b1(5, 4, 3);
    cout << "Volume using constructor values: " << b1.volume() << endl;

    // Update using setDimensions()
    b1.setDimensions(10, 6, 2);
    cout << "Volume after updating dimensions: " << b1.volume() << endl;

    return 0;
}
