#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
    int height;
};
void setdata(int a , int b , int c,struct Rectangle &r1){
    r1.length = a;
    r1.breadth = b;
    r1.height = c;
}
int volume(struct Rectangle &r1){
    return (r1.length*r1.breadth*r1.height);
}


int main(){
    struct Rectangle r1;
    setdata(4,2,2,r1);
    int volume1 = volume(r1);
    cout<<"The volume of the rectangle is "<<volume1<<endl;

    return 0;
}