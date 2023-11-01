#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length ;
    int breadth ; 
    Rectangle(int length , int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    void area();

};
void Rectangle :: area(){
    cout<<"The area is "<<length*breadth<<endl;
}
int main(){
    Rectangle r(10 ,5);
    cout<<"Length :"<<r.length<<endl;
    cout<<"Breadth : "<<r.breadth<<endl;
    r.area();

    return 0;
}