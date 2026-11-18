
#include <iostream>
using namespace std;

int main() {

    // Original variable
    int a = 10;

    // Reference variable
    int &ref = a;

    cout << "Original value: " << a << endl;
    cout << "Reference value: " << ref << endl;

    // Modify using reference variable
    ref = 20;

    cout << "\nAfter modifying reference:" << endl;
    cout << "Original value: " << a << endl;
    cout << "Reference value: " << ref << endl;

    cout << "\nAddress of a: " << &a << endl;
    cout << "Address of ref: " << &ref << endl;

    return 0;
}
//A reference must be initialized when declared.
A reference is an alias, not a separate variable
Both names refer to the same memory location.
