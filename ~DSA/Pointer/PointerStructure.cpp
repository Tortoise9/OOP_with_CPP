#include<iostream>
using namespace std;
struct Rectangle{
    int breadth;
    int length;
};
int main(){
// let create a pointer of the struct type 
struct Rectangle r={10,5};
// now only it will take a space 
// after  it occupies the space we can use pointer to access
// lets access with pointer 
struct Rectangle *rp;
// 
cout<<"size : "<<sizeof(rp)<<endl;
rp=&r;
cout<<"length :"<<rp->length<<endl;
cout<<"breadth :"<<rp->breadth<<endl;
// let access without pointer with the object 
cout<<"Length : "<<r.breadth<<endl;
cout<<"breadth:"<<r.length<<endl;

return 0;

}