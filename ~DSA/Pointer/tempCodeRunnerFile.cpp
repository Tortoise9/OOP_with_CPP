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
rp=&r;
// rp is in the location r 
cout<<"Length : " <<(*rp).length<<endl;
// or 
cout<<"length : "<<rp->breadth<<endl;


return 0;

}