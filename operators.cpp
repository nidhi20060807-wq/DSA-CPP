
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // 1. Arithmetic Operators
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    // 2. Relational Operators
    cout << "Equal: " << (a == b) << endl;
    cout << "Not Equal: " << (a != b) << endl;
    cout << "Greater: " << (a > b) << endl;
    cout << "Less: " << (a < b) << endl;
    cout << "Greater or Equal: " << (a >= b) << endl;
    cout << "Less or Equal: " << (a <= b) << endl;

    // 3. Logical Operators
    cout << "AND: " << (a > 0 && b > 0) << endl;
    cout << "OR: " << (a > 0 || b < 0) << endl;
    cout << "NOT: " << !(a > b) << endl;

    // 4. Assignment Operators
    int c = 10;
    c += 5;
    cout << "Addition Assignment: " << c << endl;
    c -= 2;
    cout << "Subtraction Assignment: " << c << endl;

    // 5. Increment and Decrement
    int x = 5;
    cout << "Pre Increment: " << ++x << endl;
    cout << "Post Increment: " << x++ << endl;
    cout << "Pre Decrement: " << --x << endl;
    cout << "Post Decrement: " << x-- << endl;

    // 6. Bitwise Operators
    cout << "Bitwise AND: " << (a & b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    cout << "Left Shift: " << (a << 1) << endl;
    cout << "Right Shift: " << (a >> 1) << endl;

    // 7. Ternary Operator
    cout << "Largest: " << (a > b ? a : b) << endl;

    // 8. sizeof Operator
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;

    return 0;
}
