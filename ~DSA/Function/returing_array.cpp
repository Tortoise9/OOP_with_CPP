#include<iostream>
using namespace std;
int* createme(int n);


int main(){
    int no ;
    cout<<"Enter the no of element you want "<<endl;
    cin>>no ;
    int *p;
    p = createme(no);
    // int  p = create(no);
    for(int i=0;i<no;i++){
        cout<<p[i];
    }
    delete p;
    p=NULL;
    return 0 ;


}
int *createme(int n){
int *ptr = new int[n];
return (ptr);
}