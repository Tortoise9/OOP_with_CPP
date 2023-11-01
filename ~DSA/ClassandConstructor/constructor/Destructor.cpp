#include<iostream>
using namespace std;
class Sms{
    public:
    Sms();
    ~Sms(){ //Destructor call automatically and doesn't take the parameter .
        cout<<"It is destructed  . "<<endl;
    }

};
Sms::Sms(){
    cout<<"Happy dashain "<<endl;
}
int main(){
    Sms sms1;


    return 0;

}