#include<iostream>
using namespace std;

int power_num(int n, int pow) {
    if(pow == 0) {
        return 1;
    }

    return n * power_num(n, pow - 1);
}

int main() {
    int num, y;

    cout << "Enter number:" << endl;
    cin >> num;

    cout << "Enter power:" << endl;
    cin >> y;

    cout << power_num(num, y);

    return 0;
}
