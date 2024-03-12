#include<iostream>
using namespace std;

class Facebook{

    public:
    virtual void smile()=0;



};
class A : public Facebook{

public:
    void smile(){
        cout<<"\n A is smiling\n";
    }


};
class B : public Facebook{

    public:
    void smile(){
        cout<<"\n B is smiling\n";
    }

};



int main(){


    //polymorphic object...
    Facebook *f;
    A a; //a class object address facebook pointer
    f = &a; // f object --> a class object
    f->smile(); //a class smile function will be called
    //parent class refereance and memory of child class object is called polymorphic object
    B b;
    f = &b;
    f->smile(); //b class smile function will be called



}