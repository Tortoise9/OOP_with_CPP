#include<iostream>
using namespace std;
void sum( int *a ){ //pass by pointer
 *a = *a+10;
}
int main(){
    int age = 23;
    sum(&age);
    cout<<"The value of age is "<<age<<endl;
    return 0 ;

}