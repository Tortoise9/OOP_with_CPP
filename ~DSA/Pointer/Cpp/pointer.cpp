#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;
    ptr = new int[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the element : "<<endl;
        cin>>ptr[i];
    }

    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
    }
    delete []ptr;

    return 0;
}