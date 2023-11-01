#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;

};
int main(){
    int *p1;//pointer variable
    char *p2; //char pointer variable
    float *p3; //float pointer variable
    double *p4 ; //double pointer variable
    struct rectangle *p5;
    cout<<"\nSize of pointer "<<sizeof(p1);
        cout<<"\nSize of pointer "<<sizeof(p2);

    cout<<"\nSize of pointer "<<sizeof(p3);

    cout<<"\nSize of pointer "<<sizeof(p4);

    cout<<"\nSize of pointer "<<sizeof(p5);

// 
// sizeof pointer = 4;


}