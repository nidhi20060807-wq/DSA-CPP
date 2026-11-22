#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int *p1 = arr;
    int *p2 = &arr[4];

    int temp;

    while(p1 < p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }

    cout << "Reversed array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
