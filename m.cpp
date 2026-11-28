
#include <iostream>
using namespace std;

class Number {
    int a;

public:
    void setData() {
        a = 10;
    }

    friend void display(Number obj);
};

void display(Number obj) {
    cout << "Value of a: " << obj.a << endl;
}

int main() {
    Number n;
    n.setData();
    display(n);

    return 0;
}
