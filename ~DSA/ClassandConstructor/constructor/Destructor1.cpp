#include<iostream>
#include<cstring>
using namespace std;
class Sms{
    int *finger;
    public:
    Sms();
    ~Sms(){
        delete finger;
        finger =NULL;
        cout<<"Destructor work done";
    }

};
Sms::Sms(){
    finger = new int;
    *finger =6;
    cout<<"I have "<<*finger<<endl;
}
int main(){
Sms s1;
return 0;

}