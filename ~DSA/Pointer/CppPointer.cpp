#include<iostream>
using namespace std;
int main(){
    // we declare the heap (dynamically by new vairable )
    // and free or delete the allocated space with delete keyword
    int a[5] ={1,255,32,2,66};
    int *ptr ;
    ptr = a;
    // or 
    // ptr = &a[0];
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
        // as pointer is of a int type so it skip the location
        // size of the pointer  0 = location :0 
        // 1 = 0+4 byte ; etc 
        
    }


}