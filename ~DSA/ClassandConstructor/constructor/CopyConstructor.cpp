#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    Rectangle(){
        length  = breadth =0;
    }
    Rectangle(Rectangle &r){
        length = r.length;
        breadth= r.breadth;
    }
    void display(){
        cout<<"Length : "<<length<<endl;
        cout<<"breadth : "<<breadth<<endl;
    }
};
int main(){
    // copy constructor 
    // we have one object and we have to 
    // assign the value of that to the next object

    Rectangle r1 ;
    r1.length =10;
    r1.breadth = 2;
    r1.display();
    // to copy constructor 
    Rectangle r2(r1) ;
    r2.display();

    // r2 = r1;
    // r2.display();

    return 0;

}