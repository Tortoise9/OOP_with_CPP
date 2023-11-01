#include<iostream>
using namespace std;
int main(){
    int *p;
    p=(int*)malloc(sizeof(int)*5);
    p[0]= 10 ;
    p[1]=34;
    p[2]=3;
    p[3]=33;
    p[4]=88;
    for(int i=0;i<5;i++){
        cout<<*(p+i)<<endl;
    }
    //   for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }
   
    free(p);
    return 0;
}