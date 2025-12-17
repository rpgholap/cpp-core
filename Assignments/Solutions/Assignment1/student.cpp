#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Setters
    void setName(string n) { name = n; }
    void setRollNumber(int r) { rollNumber = r; }
    void setMarks(float m) { marks = m; }

    // Getters
    string getName() { return name; }
    int getRollNumber() { return rollNumber; }
    float getMarks() { return marks; }
    char getGrade() { return grade; }

    // Calculate grade based on marks
    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';
        cout << "Grade calculated successfully!\n";
    }

    // Display information
    void displayInfo() {
        cout << "\n Student Information \n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    int choice;

    while (true) {
        cout << "Choose: \n";
        cout << "1. Accept Information\n";
        cout << "2. Display Information\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            int roll;
            float marks;

            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Roll Number: ";
            cin >> roll;
            cout << "Enter Marks: ";
            cin >> marks;

            s.setName(name);
            s.setRollNumber(roll);
            s.setMarks(marks);
            break;
        }
        case 2:
            s.displayInfo();
            break;

        case 3:
            s.calculateGrade();
            break;

        case 4:
            cout << "Exiting program...";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
