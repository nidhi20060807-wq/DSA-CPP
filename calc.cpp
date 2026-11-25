
#include<iostream>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:
    void addition(int num1, int num2) {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtraction(int num1, int num2) {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiplication(int num1, int num2) {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void division(int num1, int num2) {
        if (num2 != 0)
            cout << "Division: " << (float)num1 / num2 << endl;
        else
            cout << "Division by zero is not possible" << endl;
    }
};

int main() {
    Calculator c;
    int N1, N2, choice;

    cout << "Enter N1:" << endl;
    cin >> N1;

    cout << "Enter N2:" << endl;
    cin >> N2;

    do {
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";

        cin >> choice;

        switch(choice) {
            case 1:
                c.addition(N1, N2);
                break;

            case 2:
                c.subtraction(N1, N2);
                break;

            case 3:
                c.multiplication(N1, N2);
                break;

            case 4:
                c.division(N1, N2);
                break;

            case 0:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 0);

    return 0;
}
