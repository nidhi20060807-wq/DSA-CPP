#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

void increaseSalary(Employee &e) {
    e.salary = e.salary + 2000;
}

int main() {
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cout << "Enter Name: ";
    cin >> e.name;

    cout << "Enter Salary: ";
    cin >> e.salary;

    cout << "\nBefore increment: " << e.salary;

    increaseSalary(e);

    cout << "\nAfter increment: " << e.salary;

    return 0;
}
