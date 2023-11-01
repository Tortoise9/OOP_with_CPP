#include<iostream>
#include<iomanip>
using namespace std;
class Students{
    private:
    string name;
    int pricing;
    public:
    Students(string a , int b){
        // constructor have a same name 
        // and get initalize at the same time 
        name = a ;
         pricing = b;
    }
    void display();
};
void Students::display(){
    cout<<"Name of Book :"<<setw(20)<<name<<endl;
    cout<<"Pricing of Book : "<<pricing<<endl;
}
int main(){
Students s1("The Fox and The wolf",2500);
s1.display();
return 0;

}