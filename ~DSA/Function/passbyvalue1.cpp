#include<iostream>
using namespace std;
int sum(int a){ //formal parameter

   a=a+10;
   return a ;
}
int main(){
    int a = 10 ;
    int result=sum(a);
    cout<<"Result is "<<result;
    cout<<endl;
    cout<<"The value of a is "<<a<<endl;
    // not change yet in the actual parameter
    return 0;
}