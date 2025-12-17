#include <iostream>
using namespace std;

// Custom Exception Class
class DivideByZero {
public:
    const char* message() const {
        return "Error: Division by Zero!";
    }
};

// Function with Exception Specification
int divide(int a, int b) throw(DivideByZero) {   // allowed to throw only DivideByZero
    if (b == 0)
        throw DivideByZero();
    return a / b;
}

int main() {
    int x, y;

    cout << "Enter numerator: ";
    cin >> x;
    cout << "Enter denominator: ";
    cin >> y;

    try {
        try {
            // May throw DivideByZero
            int result = divide(x, y);
            cout << "Result = " << result << endl;
        }
        catch (DivideByZero &e) {
            cout << "Inside inner catch\n";
            throw;   // RETHROW to outer catch
        }
    }
    catch (DivideByZero &e) {
        cout << "Handled in outer catch\n";
        cout << e.message() << endl;
    }

    return 0;
}
