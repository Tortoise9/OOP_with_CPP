// let find the perimeter and the area of the rectangle 
#include<iostream>
using namespace std;
int main(){
    int length , breadth , height ;
    cout<<"Enter the length and breadth : "<<endl;
    cin>>length>>breadth;
    int perimeter = 2*(length * breadth ); 
    int area = length*breadth;
    cout<<"Perimeter : "<<perimeter<<endl;
    cout<<"Area : "<<area<<endl;


    
    return 0;

}