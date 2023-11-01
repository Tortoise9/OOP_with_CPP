#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


struct Detail{
    string name;
    int age ;
    string occupation;
    string status;
};
void display(struct Detail d,struct Detail &d1){ 
    // d is a copy of struct Detail  type structure 
    // and d1 is the actual struct type structure as it is formed as d1 and sent 
    // by address
    cout<<"Name : "<<d.name<<endl;
    cout<<"Age : "<<d.age<<endl;
    cout<<"Occupation :"<<d.occupation<<endl;
    cout<<"Status : "<<d.status<<endl;
    cout<<"Size :" <<sizeof(d)<<endl;
    // d is a pass by value;
    // d1 is tha pass by address so 
    cout<<setw(50)<<endl;
    cout<<endl<<endl;
    cout<<endl;
    d.name = "Sandesh Pandey";
    cout<<"pass by value after manipulating: "<<d.name<<endl;
    cout<<"pass by address : "<<d1.name<<endl;


}
int main(){
    struct Detail d1 = {"sushil pandey",23,"Farmer","Unmarried"};
    display (d1,d1);

}