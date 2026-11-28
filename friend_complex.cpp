
#include<iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getdata(int r, int i) {
        real = r;
        imag = i;
    }

    friend void add(Complex, Complex);
};

void add(Complex obj1, Complex obj2) {
    int r, i;

    r = obj1.real + obj2.real;
    i = obj1.imag + obj2.imag;

    cout << "Sum = " << r << " + " << i << "i" << endl;
}

int main() {
    Complex c1, c2;

    c1.getdata(3, 4);
    c2.getdata(2, 5);

    add(c1, c2);

    return 0;
}
