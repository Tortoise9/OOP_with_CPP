#include <iostream>
using namespace std;
int age( int a ){ // this will create a copy of a in this function
int currentYear = 2023;
return (currentYear-a);
}

int main(){
    int birthyear=2001 ;
    int is_age = age(birthyear);
    cout<<"your age is "<<is_age<<endl;
    return 0 ;
}