#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}

    // Friend function to compare two Number objects
    friend bool operator>(const Number &a, const Number &b);
    // Friend class
    friend class Inspector;
    // Pre-increment ++n
    Number& operator++() {
        value++;           // increment first
        return *this;      // return updated object
    }
    // Post-increment n++
    Number operator++(int) {
        Number temp = *this;   // save old value
        value++;               // increment after
        return temp;           // return old value
    }
    // Assignment operator =
    Number& operator=(const Number &other) {
        if (this != &other)     // avoid self-assignment
            value = other.value;
        return *this;
    }
};
// Friend function definition
bool operator>(const Number &a, const Number &b) {
    return a.value > b.value;
}
// Friend class
class Inspector {
public:
    void display(const Number &n) {
        cout << "Inspector sees value = " << n.value << endl;
    }
};
int main() {
    Number n1(10), n2(20), n3;
    Inspector I;
    // 1. Pre & Post increment difference
    cout << "\n--- Pre-increment (++n1) ---\n";
    ++n1;
    I.display(n1);
    cout << "\n--- Post-increment (n1++) ---\n";
    Number old = n1++;
    cout << "Returned old value: ";
    I.display(old);
    cout << "After post-increment: ";
    I.display(n1);
    // 2. Assignment operator
    n3 = n1;
    cout << "\nAssigned n3 = n1\n";
    I.display(n3);
    // 3. Compare objects
    cout << "\n--- Comparing n1 & n2 ---\n";
    if (n1 > n2)
        cout << "n1 is greater\n";
    else
        cout << "n2 is greater\n";
    return 0;
}
