#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
    char* str;  // dynamic char array
public:
    String(const char* s = "") {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = new char[1];
            str[0] = '\0';
        }
    }
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;  // free existing memory
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }
    ~String() {
        delete[] str;
    }
    String operator+(const String& other) const {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        String result(temp);
        delete[] temp;
        return result;
    }
    friend ostream& operator<<(ostream& out, const String& s) {
        out << s.str;
        return out;
    }
    friend istream& operator>>(istream& in, String& s) {
        char buffer[1000]; // temporary buffer
        in.getline(buffer, 1000);
        delete[] s.str;
        s.str = new char[strlen(buffer) + 1];
        strcpy(s.str, buffer);
        return in;
    }
};
int main() {
    String s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    String s3 = s1 + s2;
    cout << "\nFirst string: " << s1 << endl;
    cout << "Second string: " << s2 << endl;
    cout << "Concatenated string: " << s3 << endl;
    return 0;
}
