// Reference is the part of the Cpp

#include<iostream>
using namespace std;
int main(){
    int a= 10;
    int &r = a;
    // here r is not a pointer 
    // here r doesn't take space (don't take a space)
    // r is a alias of the a ;
    // nickname to a 
    r = 23;
    int b = 25;
    r=b;
    cout<<"A: "<<a<<endl<<"R: "<<r<<endl;
    return 0;
}