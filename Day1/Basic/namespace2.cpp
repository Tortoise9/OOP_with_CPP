#include<iostream>
// iostream is a standard library that contain inbuilt function like cout cin
int main(){
    std::string name = "Sushil Pandey";
    // cout<<"My name is "<<name<<endl;
    // here this will show error as we haven't specify the address of them 
    // so  inorder to solve it we can write the std:: infornt of there member
    std::cout<<"My name is "<<name <<std::endl;
    //std is a namespace which have lot of member some are
    // cout , endl ,string etc; 
}