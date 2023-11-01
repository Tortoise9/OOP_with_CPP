#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[] ={1,9,8,2,11}; //delcare and initialization
    // let  
    int totalElement = sizeof(a)/sizeof(a[0]); 
    // sizeof(a) is divided into 5 part so 5 element 
    for(int i=0;i<totalElement;i++){
        cout<<a[i]<<endl;; //accesing the array element 

    }
    // with pointer let display the value s
    cout<<setw(28);
    cout<<"For pointer\n";
    int *p ;
    p=&a[0];
    for(int i=0;i<totalElement;i++){
        cout<<*(p+i)<<endl;
    }


}