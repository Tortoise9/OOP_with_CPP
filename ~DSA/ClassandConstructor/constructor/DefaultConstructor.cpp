#include<iostream>
using namespace std;
class Rectangle{
    public:
    
    int length;
    int breadth;
    Rectangle(){//Default constructor 
    // it get call at the time of object formation
        length =0;
        breadth=0;
    }

};
int main(){
    Rectangle r ;
    cout<<"Length : "<<r.length<<endl;
    cout<<"Breadth : "<<r.breadth<<endl;

    return 0;
}