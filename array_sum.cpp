#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << "Enter the 5 elements:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int *p = arr;

    cout << "Elements of array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << *(p+i) << " ";
        sum += *(p+i);
    }

    cout << "\nSUM: " << sum << endl;

    return 0;
}
