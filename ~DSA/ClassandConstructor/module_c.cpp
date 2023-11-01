#include<iostream>
using namespace std;

#include<stdio.h>
struct Rectangle {
    int length ;
    int breadth;
};
void initalize(struct Rectangle &r, int l ,int  b){
    r.length= l;
    r.breadth = b;
}
void area(struct Rectangle &r){
    cout<<"Area : "<<r.length*r.breadth<<endl;
}
void perimeter(struct Rectangle &r){
    cout<<"Perimeter : "<<2*(r.breadth+r.length)<<endl;
}




int main(){
    Rectangle r ;
    int length = 4;
    int breadth = 2;
    initalize(r,length,breadth);
    area(r);
    perimeter(r);


    return 0;

}