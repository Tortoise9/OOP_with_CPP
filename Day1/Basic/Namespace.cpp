#include<iostream>
using namespace std;
// if we have 2 friend with the same name but from different places then when we call that friend as their name 
// both of them will come forward but our intention is to call one friend for example 
// sushil from jhapa 
// sushil from bhadrapur 
// in order to solve this confusion we have to address them in the programming to  as shown below
namespace Jhapa {
    string name = "sushil";
    string surname = "Pandey";
   int age = 23;
}
namespace Bhadrapur {
    // here name and surname is a member of Bhadrapur namespace 
    string name = "Sushil";
    string surname = "Limbu";
    int age= 22;

}

// let create a 2 namespace 
int main(){
    // in order to call the friend of bhadrapur we need to specify the namespace name Bhadrapur and viceversa
    cout<<"The name of the Student : " <<Bhadrapur::name<<endl;
    cout<<"The age of the jhapa friend is : "<<Jhapa::age;
    return 0 ;

}