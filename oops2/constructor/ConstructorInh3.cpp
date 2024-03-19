#include<iostream>
#include<string>

using namespace std;

class User{

    public:

    User(){
        cout<<"User Default Constructor"<<endl;
    }
    User(int age){
        cout<<"User Parameterized Constructor"<<endl;
        cout<<age<<endl;
    }
    User(int age,string name){
        cout<<"User Parameterized Constructor"<<endl;
        cout<<age<<endl;
        cout<<name<<endl;
    }
   
};
int main(){


    User u(100,"Rahul");


}