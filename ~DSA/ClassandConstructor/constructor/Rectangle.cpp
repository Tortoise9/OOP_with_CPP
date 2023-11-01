#include<iostream>
using namespace std;
class Rectangle { 
    int length;
    int breadth;
    public :
    Rectangle(int a , int b){
        length = a ;
        breadth=b ;
    }
    void print(){ 
        cout<<"Length : "<<length<<endl <<" Breadth : "<<breadth<<endl;
    }

    ~Rectangle(){
        cout<<"Destructor";
    }
    
};
