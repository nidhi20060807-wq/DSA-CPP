
#include<iostream>
using namespace std;

class ShoppingCart {
private:
    string ProductName;
    int price;
    int quantity;

public:
    void addProduct() {
        cout << "Enter product name: ";
        cin >> ProductName;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    int total_price() {
        return price * quantity;
    }

    void display() {
        cout << "\nProduct Name: " << ProductName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: " << total_price() << endl;
    }
};

int main() {
    ShoppingCart p[3];
    int grandTotal = 0;

    for(int i = 0; i < 3; i++) {
        cout << "\nEnter Product " << i + 1 << " Details\n";
        p[i].addProduct();
    }

    cout << "\n========== SHOPPING BILL ==========\n";

    for(int i = 0; i < 3; i++) {
        p[i].display();
        grandTotal = grandTotal + p[i].total_price();
    }

    cout << "\nGrand Total: " << grandTotal << endl;

    return 0;
}
