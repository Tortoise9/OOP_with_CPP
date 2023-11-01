#include<iostream>
using namespace std;
void sum(int &a ){ 
    //a is passed by the address which means 
    // the changes is reflect the  all program
    a = a+10;
}
int main(){
    int a= 10 ;
    sum(a);
    cout<<"value of a is "<<a<<endl;

}