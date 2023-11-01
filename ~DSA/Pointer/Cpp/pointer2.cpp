#include<iostream>
using namespace std;
int main(){
    int * ptr1;
    ptr1 = new int(23);
    // declare and initalization
    cout<<"Value is "<<*ptr1;
    delete ptr1;
}