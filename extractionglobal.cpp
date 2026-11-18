#include<iostream>
using namespace std;
int c=45;//declaring a global variable
int main(){
  int a,b,c;
  cout<<"enter the value of a:"<<endl;
  cin>>a;
  cout<<"enter the value of b:"<<endl;
  cin>>b;
  c=a+b;
  cout<<"The sum is:"<<c;
  cout<<"the global c is"<<::c;//we can access global variable c with the help of scope resolution operator
  return 0;}
