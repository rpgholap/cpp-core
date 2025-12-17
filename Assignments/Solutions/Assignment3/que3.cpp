#include <iostream>
using namespace std;
class Matrix {
private:
    int rows, cols;
    int **data;
public:
    // Constructor
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
        if (rows > 0 && cols > 0) {
            data = new int*[rows];
            for (int i = 0; i < rows; i++)
                data[i] = new int[cols];
        } else {
            data = nullptr;
        }
    }
    // Destructor
    ~Matrix() {
        if (data != nullptr) {
            for (int i = 0; i < rows; i++)
                delete[] data[i];
            delete[] data;
        }
        // cout << "Matrix destroyed\n"; // optional
    }
    // Input Operator >>
    friend istream& operator>>(istream &in, Matrix &m) {
        cout << "Enter " << m.rows << "x" << m.cols << " matrix values:\n";
        for (int i = 0; i < m.rows; i++)
            for (int j = 0; j < m.cols; j++)
                in >> m.data[i][j];
        return in;
    }
    // Output Operator <<
    friend ostream& operator<<(ostream &out, const Matrix &m) {
        for (int i = 0; i < m.rows; i++) {
            for (int j = 0; j < m.cols; j++)
                out << m.data[i][j] << " ";
            out << endl;
        }
        return out;
    }
    // Operator +  (Matrix Addition)
    Matrix operator+(const Matrix &m) {
        if (rows != m.rows || cols != m.cols) {
            cout << "Matrix sizes do not match! Returning empty matrix.\n";
            return Matrix();
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] + m.data[i][j]--;
        return result;
    }
    // Operator ==
    bool operator==(const Matrix &m) {
        if (rows != m.rows || cols != m.cols)
            return false;

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (data[i][j] != m.data[i][j])
                    return false;

        return true;
    }
};
int main() {
    int r, c;
    cout << "Enter rows and cols for matrices: ";
    cin >> r >> c;
    Matrix m1(r, c), m2(r, c);
    // 1. Input matrices
    cin >> m1;
    cin >> m2;
    // 2. Add matrices
    Matrix m3 = m1 + m2;
    cout << "\nMatrix 1:\n" << m1;
    cout << "\nMatrix 2:\n" << m2;
    cout << "\nMatrix 3 (Addition Result):\n" << m3;
    // 3. Compare matrices
    if (m1 == m2)
        cout << "\nBoth matrices are equal.\n";
    else
        cout << "\nMatrices are NOT equal.\n";
    return 0;
}
