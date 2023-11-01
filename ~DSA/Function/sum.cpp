#include<iostream>
using namespace std;
int add(int a ,int b ){

    return (a+b);
}
int main(){
    int x , y ;
cout<<"Enter the value of a and b : "<<endl;
cin>>x>>y;
int sum = add(x,y);
cout<<"Sum : "<<sum;
return 0;


}