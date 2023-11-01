#include<iostream>
#include<string>
using namespace std;
struct School{
    string name;
    int no_of_students;
}s;
struct School * create(struct School s){
    // cout<<sizeof(s);
    struct School *ps = new School;
    ps->name="Havard College";
    ps->no_of_students= 2000;
    return ps;
}
int main(){
   struct School *p =  create(s);
   cout<<p->name<<endl;
   cout<<p->no_of_students<<endl;

   delete p;
   p =NULL;
   return 0;
}