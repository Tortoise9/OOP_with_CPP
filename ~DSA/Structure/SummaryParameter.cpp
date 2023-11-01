// struct can be passed by the value 
// pointer and address where
// Array can only be pass by the address
// example
#include<iostream>
using namespace std;
void display(int a[], int n){ //we can only target the by 
//  either pointer or the address of the array 
    for(int x=0;x<n;x++){
        cout<<a[x]<<endl;
    }
}
int main(){
    int n = 5;
    int a[n] = {2,43,1,55,3};
    display(a,n);
    return 0;

}