
#include<iostream>
#include<string>
using namespace std;

class Student{
    int Roll_number;
    string Name;
    float marks[3];
    float total_marks=0;

public:
    void getDetails();
    void calculateTotal();
    void displayDetails();
};

void Student::getDetails(){
    cout<<"Enter the roll number:"<<endl;
    cin>>Roll_number;

    cout<<"Enter the Name:"<<endl;
    cin>>Name;

    for(int i=0;i<3;i++){
        cout<<"Enter marks in subject "<<i+1<<":"<<endl;
        cin>>marks[i];
    }
}

void Student::calculateTotal(){
    total_marks=0;

    for(int i=0;i<3;i++){
        total_marks+=marks[i];
    }
}

void Student::displayDetails(){
    cout<<"\nStudent Details"<<endl;
    cout<<"Roll number: "<<Roll_number<<endl;
    cout<<"Name: "<<Name<<endl;

    for(int i=0;i<3;i++){
        cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
    }

    cout<<"Total marks: "<<total_marks<<endl;
}

int main(){
    Student s1;

    s1.getDetails();
    s1.calculateTotal();
    s1.displayDetails();

    return 0;
}
