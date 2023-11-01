// oop

#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setdata(int a , int b);
    int area(){
        return(length * breadth);
    }
    void changelength(int l){
        length = l;
    }

};
void Rectangle :: setdata(int a ,int b){
length =a ;
breadth = b;
}

int main(){
    Rectangle r1; 
    // r1 is a object not variable
r1.setdata(10,4);
int area = r1.area();
cout<<area;
r1.changelength(8);
int newarea =r1.area();
cout<<newarea<<endl;


return 0;
}