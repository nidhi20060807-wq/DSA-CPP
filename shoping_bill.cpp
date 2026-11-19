#include <iostream>
#include <string>
using namespace std;

int main()
{
    string product = "Notebook";
    float price = 50.5f;
    int quantity = 4;

    const float gst = 5.0f;

    int &ref = quantity;

    ref = 4;

    float subtotal = price * quantity;

    float gstAmount = subtotal * gst / 100;

    float finalBill = subtotal + gstAmount;

    int integerBill = (int)finalBill;

    cout << "Product: " << product << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "GST: " << gstAmount << endl;
    cout << "Final Bill: " << finalBill << endl;
    cout << "Integer Bill: " << integerBill << endl;

    return 0;
}
