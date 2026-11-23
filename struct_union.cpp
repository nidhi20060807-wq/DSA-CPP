#include <iostream>
using namespace std;

struct Student {
    string name;
    int usn;
    float m1, m2, m3;
};

void display(Student s) {
    float avg = (s.m1 + s.m2 + s.m3) / 3;

    cout << "Name: " << s.name << endl;
    cout << "USN: " << s.usn << endl;
    cout << "Average: " << avg << endl;
}

int main() {
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter USN: ";
    cin >> s.usn;

    cout << "Enter 3 marks: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    display(s);

    return 0;
}
