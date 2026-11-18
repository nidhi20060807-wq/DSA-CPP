
#include <iostream>
using namespace std;

int main() {

    // 1. Implicit Typecasting
    float a = 10;
    double b = 3.45f;

    cout << "Implicit Typecasting:" << endl;
    cout << a << endl;
    cout << b << endl;

    // 2. Explicit Typecasting
    int c = (int)3.45f;

    cout << "\nExplicit Typecasting:" << endl;
    cout << c << endl;

    // 3. Integer to Character
    char ch = (char)65;

    cout << "\nInteger to Character:" << endl;
    cout << ch << endl;

    return 0;
}
