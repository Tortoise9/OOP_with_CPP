#include<iostream>
using namespace std;
int main(){
    int *ptr ;//
    int a[5] = {10,20,77,2,4};
    ptr = &a[0];
    //ptr = &a;
    for(int i=0;i<5;i++){
        printf("\nThe value are  %d",*(ptr + i));
            printf("\nThe value are  %d",(ptr + i));
    }
    return 0;
}