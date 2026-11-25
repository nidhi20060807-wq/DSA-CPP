
#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    float marks;

public:
    void getDetails() {
        cout << "Enter name:" << endl;
        cin >> name;

        cout << "Enter roll_no:" << endl;
        cin >> rollno;

        cout << "Enter marks:" << endl;
        cin >> marks;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "USN: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.getDetails();
    s1.displayDetails();

    return 0;
}
