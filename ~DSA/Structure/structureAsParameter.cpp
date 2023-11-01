#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int area(struct Rectangle r){ //pass by value 
    return (r.length * r.breadth);
}
int main(){
    struct Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    int area1 = area(r1);
    cout<<"Area : "<<area1<<endl;


    return 0;
}