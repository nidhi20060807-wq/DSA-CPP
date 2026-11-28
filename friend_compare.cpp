
#include<iostream>
using namespace std;

class B;

class A {
    int x;

public:
    void get_data() {
        x = 10;
    }

    friend void compare(A, B);
};

class B {
    int y;

public:
    void get_data() {
        y = 20;
    }

    friend void compare(A, B);
};

void compare(A obj1, B obj2) {
    if (obj1.x > obj2.y) {
        cout << obj1.x << " is greater than " << obj2.y;
    }
    else if (obj1.x == obj2.y) {
        cout << obj1.x << " is equal to " << obj2.y;
    }
    else {
        cout << obj1.x << " is less than " << obj2.y;
    }
}

int main() {
    A obj1;
    B obj2;

    obj1.get_data();
    obj2.get_data();

    compare(obj1, obj2);

    return 0;
}
