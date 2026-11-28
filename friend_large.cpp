#include<iostream>
using namespace std;

class Numbers{
int a,b,c;
public:
void getdata(){
a=10;
b=11;
c=12;}
friend void find_largest(Numbers obj);
};

void find_largest(Numbers obj){
if(obj.a>=obj.b && obj.a>=obj.c){
cout<<"a is large"<<endl;
}
else if(obj.b>=obj.a && obj.b>=obj.c){
cout<<"b is large"<<endl;
}
else{
cout<<"c is large"<<endl;
}
}

int main(){
Numbers N;
N.getdata();
find_largest(N);
return 0;}
