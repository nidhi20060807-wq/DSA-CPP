#include <iostream>
using namespace std;

int main()
{
    int marks1 = 80;
    int marks2 = 90;
    int marks3 = 85;

    const int maxMarks = 100;

    int &ref = marks1;

    int total = marks1 + marks2 + marks3;

    float average = total / 3.0;

    int intAverage = (int)average;

    cout << "Subject 1: " << marks1 << endl;
    cout << "Subject 2: " << marks2 << endl;
    cout << "Subject 3: " << marks3 << endl;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Integer Average: " << intAverage << endl;

    cout << "Reference variable: " << ref << endl;
    cout << "Maximum marks: " << maxMarks << endl;

    return 0;
}
