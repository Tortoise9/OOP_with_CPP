#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p;
    p = (int*)malloc(sizeof(int)*5);
    // it will create the block of memory of size 20 
    cout<<"Address :"<<p;
    //  p point to the
    for(int i=0;i<5;i++){
        cout<<"\nEnter the element :";
        cin>>*(p+i);
    }
    for(int i= 0;i<5;i++){
        cout<<"\nvalues : "<<*(p+i);
    }
    free(p);




    return 0;
}