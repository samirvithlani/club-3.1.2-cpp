#include<iostream>
using namespace std;

class Parent{

public:
    // Parent(){
    //     cout<<"Parent Constructor"<<endl;
    // }
    Parent(int a){
        cout<<"Parent Constructor"<<endl;
        cout<<a<<endl;
    }

};

class Child:public Parent{

    public:
    Child():Parent(100){
        cout<<"Child Constructor"<<endl;
    }
};
int main(){

    Child c;



}