
#include<iostream>
#include<string>
using namespace std;

class Book{
    int bookId;
    string bookName;
    string author;
    float price;

    static int count;
    static float max;
    static int maxIndex;

public:
    void getDetails();
    void displayDetails();
    static void showCount();

    // Normal member function
    void max_price(int index);

    // Display most expensive book
    static void disp_maxprice(Book b[]);
};

int Book::count=0;
float Book::max=0;
int Book::maxIndex=0;

void Book::getDetails(){

    cout<<"Enter the book ID:"<<endl;
    cin>>bookId;

    cout<<"Enter the book name:"<<endl;
    cin>>bookName;

    cout<<"Enter the author name:"<<endl;
    cin>>author;

    cout<<"Enter the price:"<<endl;
    cin>>price;

    count++;
}

void Book::displayDetails(){

    cout<<"\nBook ID: "<<bookId<<endl;
    cout<<"Book Name: "<<bookName<<endl;
    cout<<"Author Name: "<<author<<endl;
    cout<<"Price: "<<price<<endl;
}

void Book::showCount(){
    cout<<"\nTotal Books: "<<count<<endl;
}

// Compare current object's price with maximum price
void Book::max_price(int index){

    if(price>max){
        max=price;
        maxIndex=index;
    }
}

// Display the most expensive book
void Book::disp_maxprice(Book b[]){

    cout<<"\nMost Expensive Book:"<<endl;
    b[maxIndex].displayDetails();
}

int main(){

    Book b[5];

    for(int i=0;i<5;i++){
        cout<<"\nEnter details of book "<<i+1<<endl;
        b[i].getDetails();
    }

    cout<<"\nLIBRARY DETAILS"<<endl;

    for(int i=0;i<5;i++){
        b[i].displayDetails();
    }

    // Find maximum price
    for(int i=0;i<5;i++){
        b[i].max_price(i);
    }

    // Display most expensive book
    Book::disp_maxprice(b);

    Book::showCount();

    return 0;
}
