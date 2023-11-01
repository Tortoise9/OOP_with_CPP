#include<iostream>
using namespace std;
struct Book {
    string name;
    int pricing;
};
void change(struct Book &b,int cost){
    b.pricing=cost;

}
int main(){
    struct Book b1={"Bhagavad Gita",2300};
    // we have to update the pricing to the  2000 as it is 
    // decrease  by 300 rs
    change(b1,2000);
    cout<<"The Update pricing is "<<b1.pricing;
    return 0;
}