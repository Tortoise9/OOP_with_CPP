#include<iostream>
using namespace std;
// structure declaration 
struct rectangle{
    int length; //structure member or variable
    int breadth;
} r1;
int main(){
 struct rectangle r2,r3={5,3};
r2.length = 10; //intializaion 
r2.breadth = 8;
cout<<r2.length <<endl;
cout<<"The area of rectangle is "<<r2.breadth*r2.length<<endl;
cout<<"The area of rectangle 2 is "<<r3.length*r3.breadth;
return 0;
}