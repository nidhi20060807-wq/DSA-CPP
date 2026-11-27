
#include<iostream>
#include<string>
using namespace std;

class Book{
    int bookId;
    string bookName;
    string author;
    float price;

    // Shared count for all Book objects
    static int count;

public:
    void getDetails();
    void displayDetails();
    static void showCount();
};

// Initializing static data member
int Book::count=0;


// Accept book details
void Book::getDetails(){

    cout<<"Enter the book ID:"<<endl;
    cin>>bookId;

    cout<<"Enter the book name:"<<endl;
    cin>>bookName;

    cout<<"Enter the author name:"<<endl;
    cin>>author;

    cout<<"Enter the price:"<<endl;
    cin>>price;

    // Increment count for every book registered
    count++;
}


// Display individual book details
void Book::displayDetails(){

    cout<<"\nLIBRARY DETAILS:"<<endl;
    cout<<"Book ID: "<<bookId<<endl;
    cout<<"Book Name: "<<bookName<<endl;
    cout<<"Author Name: "<<author<<endl;
    cout<<"Price: "<<price<<endl;
}


// Display total number of books
void Book::showCount(){

    cout<<"\nTotal Books: "<<count<<endl;
}


int main(){

    // Creating an array of 5 Book objects
    Book b[5];

    // Accepting details of all 5 books
    for(int i=0;i<5;i++){
        cout<<"\nEnter details of book "<<i+1<<endl;
        b[i].getDetails();
    }

    // Displaying details of all 5 books
    for(int i=0;i<5;i++){
        b[i].displayDetails();
    }

    // Calling static function using class name
    Book::showCount();

    return 0;
}
