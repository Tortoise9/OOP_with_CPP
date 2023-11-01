#include<iostream> //standard library
using namespace std;
int main(){
    int  A[5]; //Declaration
    A[0]=12; //initialization
    A[1]=15;
    A[2]=25;
    A[3]=33;
    A[4]=77;
    // int A[5]={12,15,25,33,77}; Both array is same you can do in this way too
    // Find the size of one slot and total size of array

    cout<<"Total Size : "<<sizeof(A)<<endl;

    cout<<"No of element in array "<<(sizeof(A)/sizeof(A[0]))<<endl;
    cout<<"Size for one slot of array Element : "<<sizeof(A)/(sizeof(A)/sizeof(A[0]))<<endl;

    //let access the element 
    cout<<"First Element : "<<A[0]<<endl; //( << << = cascading)
    // let print all element :
    for(int i=0;i<(sizeof(A)/sizeof(A[0])) ; i++){
        cout<<"A["<<i<<"] :"<<A[i]<<endl;
    }

    return 0;
}