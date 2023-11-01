#include <iostream>
using namespace std;
int main(){

    // let allocate the memory in the heap 
    int * ptr ;
    ptr = new int[5];
    ptr[0] = 1;
    ptr[1] =34;

    for(int i =0;i<2;i++){
        cout<<ptr[i]<<endl;
        cout<<&ptr[i]<<endl;
    }
    cout<<sizeof(ptr);
    //  this will allocate the 5 space of int in the memory 
    // total of space 5*4 byte;
    delete [] ptr;
}