#include<iostream>
using namespace std;
int main(){
    int * p ; 
    p = new int[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the element :"<<endl;
        cin>>p[i];
    }
    // in order to access them
    cout<<"With the Access "<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;

    }
    // else 
    //   for(int i=0;i<5;i++){
    //     cout<<*(p+i)<<endl;


    // }

    delete []p;
    p =NULL;
}