
#include<iostream>
#include<string>
using namespace std;

// Class declaration
class Employee{

    // Private data members
    int employeeId;
    string Name;
    float salary;

    // Static data member: shared by all Employee objects
    static int count;

public:

    // Member function declarations
    void getDetails();
    void dispDetails();

    // Static member function
    static void showCount();
};

// Initialising static data member outside the class
int Employee::count=0;


// Function to accept employee details
void Employee::getDetails(){

    cout<<"Enter employee ID:"<<endl;
    cin>>employeeId;

    cout<<"Enter name of employee "<<count+1<<":"<<endl;
    cin>>Name;

    cout<<"Enter salary:"<<endl;
    cin>>salary;

    // Increment count whenever an employee is registered
    count++;
}


// Function to display employee details
void Employee::dispDetails(){

    cout<<"Employee ID: "<<employeeId<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"Salary: "<<salary<<endl;
}


// Static function to display total employee count
void Employee::showCount(){

    // Static function can directly access static data members
    cout<<"Total employees: "<<count<<endl;
}


int main(){

    // Creating an object of Employee class
    Employee e1;

    // Calling member functions using object
    e1.getDetails();
    e1.dispDetails();

    // Calling static function using class name
    Employee::showCount();

    return 0;
}
