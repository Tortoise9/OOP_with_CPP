#include<iostream>
int main(){
    // let insert into tables 
    // 
    int n;
    std::cout<<"Enter the number of row in table : "<<std::endl;
    std::cin>>n;
    // each string of size 20
    char a[n][20];
    for(int i=0;i<n;i++)
    {
     std::cout<<"Enter the elements  : "<<std::endl;
       std:: cin>>a[i];
    }
    
    for(char *one : a){
        std::cout<<one<<std::endl;
    }
    std::cout<<sizeof(a);
    return 0;
}