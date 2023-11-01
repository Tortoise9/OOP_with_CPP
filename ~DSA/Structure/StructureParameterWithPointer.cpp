#include<iostream>
// pass by pointer 
using namespace std;
// with pointer
struct Rectangle {
    int length;
    int breadth;
};
int area(struct Rectangle *r){ 
    return (r->length * r->breadth);

}
int main(){
    struct Rectangle r1;
    r1.length =2;
    r1.breadth =5;
    int area1 =area(&r1);
    cout<<"The area of rectangel is :" <<area1<<endl;

return 0;
}