#include<iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int breadth ; 
    public:
    Rectangle(int length, int breadth){
        //constructor 
        this->length = length;
        this->breadth=breadth;
    }
    void perimeter();

    void area (){
        cout<<"the area of the given rectangle is :"<<length*breadth<<endl;
    }
};

void  Rectangle :: perimeter() {
    cout<<"Perimeter is :"<<2*(length+breadth)<<endl;
}
int main(){
    Rectangle r(4,2);
    r.area();
    r.perimeter();



    return 0;
}