#include<iostream>
using namespace std;
int add(int a ,int b ){
    // formal paramter 

    return (a+b);
}
int main(){
    int *p , *q;
    p = new int;
    q = new int;
cout<<"Enter the value of a and b : "<<endl;
cin>>*p>>*q;
int sum = add(*p,*q);
// *p and *q is a Actual parameter
cout<<"Sum : "<<sum;

delete p ,q;
return 0;



}