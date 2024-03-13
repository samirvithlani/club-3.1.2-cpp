#include<iostream>
using namespace std;

class Facebook{

    public:
    string name;

    Facebook(string n){
        name = n;
    }

    void printUserName(){
        cout<<"Name is "<<name<<endl;
    }



};
int main(){
    cout<<"Hello World"<<endl;

    Facebook u1("John");
    u1.printUserName();

    Facebook u2("amit");
    u2.printUserName();


    return 0;
}