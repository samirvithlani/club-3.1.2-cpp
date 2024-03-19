#include<iostream>
using namespace std;

class Parent{

    public:
    // Parent(){

    //     cout<<"parent const \n";
    // }
    Parent(int b){

        cout<<"parent const param \n";
        cout<<b<<endl;
    }

};

class Child : public Parent{

    public:
    Child(int x):Parent(9000){

        cout<<"child const \n";
        cout<<x<<endl;
    }
    Child():Parent(100){

        cout<<"child default... const \n";
    }
};

int main(){

   // Child c(100);
   Child c;
    

}