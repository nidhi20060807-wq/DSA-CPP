#include <iostream>
using namespace std;

struct BankAccount {
    int accountNumber;
    string name;
    float balance;
};

void deposit(float &balance) {
    float amount;

    cout << "Enter deposit amount: ";
    cin >> amount;

    balance = balance + amount;

    cout << "Amount deposited successfully!\n";
}

void withdraw(float &balance) {
    float amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if(amount <= balance && amount > 0) {
        balance = balance - amount;
        cout << "Withdrawal successful!\n";
    }
    else {
        cout << "Insufficient balance or invalid amount!\n";
    }
}

void display(BankAccount b) {
    cout << "\nAccount Number: " << b.accountNumber;
    cout << "\nAccount Holder: " << b.name;
    cout << "\nAvailable Balance: " << b.balance << endl;
}

int main() {
    BankAccount b;
    int choice;

    cout << "Enter Account Number: ";
    cin >> b.accountNumber;

    cout << "Enter Account Holder Name: ";
    cin >> b.name;

    cout << "Enter Initial Balance: ";
    cin >> b.balance;

    do {
        cout << "\n--- BANK MENU ---";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Balance";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                deposit(b.balance);
                break;

            case 2:
                withdraw(b.balance);
                break;

            case 3:
                display(b);
                break;

            case 4:
                cout << "Thank you!";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
