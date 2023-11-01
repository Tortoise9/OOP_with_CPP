// lets pass the array
#include<iostream>
using namespace std;
void sum(int a[] , int *b ,int n){
    // int *b  is a pointer that can point to a any integer 
    // where a[] is a pointer to the that specific array only 
    // alway use a[] instead of pointer variable 
    // n = pass by  value
    // array is only pass by address only

     //what ever you like 
    // we can pass the array by a[] or the address itself
    //  array cannot be pass by the value 
    int sum =0;
for(int i=0;i<n;i++){
sum = a[i]+b[i]+sum;
}
cout<<"Total sum is "<<sum<<endl;

}
int main(){

    // let create the 2 arrays
    int * a= new int[5];
    for(int i=0;i<5;i++){
        cout<<"\nEnter the Array Element : "<<endl;
        cin>>a[i];
    }
     
     int * p = (int*)malloc(sizeof(int)*5);
     for(int i=0;i<5;i++){
        printf("\nEnter the array element : ");
        scanf("%d",(p+i));
     }
     sum(a,p,5);
     delete(a);
     a = NULL;
     free(p);
     p=NULL;

return 0;
}