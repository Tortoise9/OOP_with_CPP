#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    struct Rectangle *ptr;
    // creating the dynamically in the heap
    ptr = (struct Rectangle * )(malloc(sizeof(Rectangle)));
    ptr->length =23;
    ptr->breadth=20;
    cout<<"Length : "<<ptr->length<<endl;
     cout<< (*ptr).length<<endl;
    cout<<"Breadth : "<<ptr->breadth<<endl;

    
    free (ptr);
    ptr=NULL;

    // ptr with c++

    struct Rectangle *r1 ;
    r1= new Rectangle;//simple
    r1->breadth=12;
    r1->length=22;
    cout<<r1->breadth<<endl;
    cout<<r1->length<<endl;


delete r1;





    return 0;
}