#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("The location of the a is %d",ptr);
    printf("\nThe content of a is %d",*ptr);
    return 0;
}