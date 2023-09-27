// we can write the namespace 2 in this way too
#include<iostream>
using  std::cout;
namespace Jhapa{
    bool isProgrammer = true;
}
using Jhapa::isProgrammer;
int main(){
    std::string name = "sushil pandey";
    cout<<"My name is "<<name<<std::endl;

    cout<<"The person is Programmer "<<std::boolalpha<<isProgrammer<<std::endl;
    cout<<"He code a lot as he is "<<isProgrammer<<" Programmer";


}