#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    // static way 
    struct Rectangle r1 ={10,5};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    
    // with pointer 
    cout<<"With pointer "<<endl;
    struct Rectangle r2; // not it occupies the space now 
    r2 = {8,3};
    // we can point it as it have location
    struct Rectangle *p;
    p = &r2;
    cout<<(*p).breadth<<endl; //. have more precedence than  * so 
    cout<<(*p).length<<endl;

    // let create a in heap with malloc and new 

// 
// cout<<"dyamic allocation"<<endl;
//     struct Rectangle *r3 ; //weonly required a pointer that point to heap as 
//     // location is located in heap 
//     r3 = (struct Rectangle *) malloc(sizeof(Rectangle));
//     (*r3).length=20;
//       (*r3).breadth=10;
//       cout<<r3->length<<endl<<r3->breadth;

//       free(r3);
//       r3 =NULL;
//       p=NULL;

      cout<<"dyamic allocation"<<endl;
    struct Rectangle *r3 ; //weonly required a pointer that point to heap as 
    // location is located in heap 
    r3= new Rectangle ; //new identifier
    r3->length=20;
    r3->breadth=12;
      cout<<r3->length<<endl<<r3->breadth;

      delete r3;
      r3 =NULL;

    //   or  
    return 0;

}