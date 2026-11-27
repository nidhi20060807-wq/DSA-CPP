
#include<iostream>
#include<string>
using namespace std;

class Binary {
    string s;
    void check_Bin(void);

public:
    void get_Bin(void);
    void ones_compliment(void);
    void disp_Bin(void);
};

void Binary::get_Bin(void) {
    cout << "Enter binary number:" << endl;
    cin >> s;
}

void Binary::check_Bin(void) {
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) != '0' && s.at(i) != '1') {
            cout << "Invalid binary format" << endl;
            exit(0);
        }
    }
    cout << "Valid binary number" << endl;
}

void Binary::ones_compliment(void) {
    check_Bin();

    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) == '0') {
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
}

void Binary::disp_Bin(void) {
    cout << "The 1's complement is: ";
    for(int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
}

int main() {
    Binary b;
    b.get_Bin();
    b.ones_compliment();
    b.disp_Bin();

    return 0;
}
