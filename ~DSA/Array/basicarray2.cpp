#include<iostream>
#include<conio.h>
int main(){
    int a[5];
    a[0]=1;
    for(int i=0;i<5;i++){
        std::cout<<a[i]<<std::endl;
    }
    // int k = std::cout<<"hello";
    int k =  printf("hello");
    std::cout <<std::endl<<k;

std::cout<<std::endl;
    char names[3][10] = {"ujwal", "somnath","sujan"};
    for( char *name : names ){
        std::cout<<name<<"\t";

    }
}