#include <iostream>
#include <fstream>
using namespace std;
class Student {
private:
    int roll;
    string name;
    float marks;
public:
    // Parameterized Constructor
    Student(int r = 0, string n = "", float m = 0.0f) {
        roll = r;
        name = n;
        marks = m;
        cout << "Constructing student: " << name << endl;
    }
    // Destructor
    ~Student() {
        cout << "Destroying student: " << name << endl;
    }
    // Function to write to file
    void writeToFile(ofstream &out) {
        out << roll << " " << name << " " << marks << endl;
    }
};
// Function to read file and print contents
void readFile() {
    ifstream in("students.txt");
    int r;
    string n;
    float m;

    cout << "\nReading from file:\n";
    while (in >> r >> n >> m) {
        cout << "Roll: " << r << ", Name: " << n << ", Marks: " << m << endl;
    }
}
int main() {
    // 1. Create array of 3 students
    Student s[3] = {
        Student(1, "Rutuja", 85.5),
        Student(2, "Pranali", 90.0),
        Student(3, "Aniket", 78.0)
    };
    // 2. Write student details to file
    ofstream out("students.txt");
    for (int i = 0; i < 3; i++)
        s[i].writeToFile(out);
    out.close();
    // 3. Read back and print
    readFile();
    // Destructors will be called here automatically for array elements
    return 0;
}
