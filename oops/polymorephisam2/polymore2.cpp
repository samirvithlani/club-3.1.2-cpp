#include<iostream>
using namespace std;

//abstract class
class RBI{


    public:
    virtual void upi()=0; //body //pure virtual function
    virtual int bag()=0; //body //pure virtual function


};

class SBI:public RBI{

public:
    void upi(){
        cout<<"SBI"<<endl;
    }
    int  bag(){
        cout<<"SBI"<<endl;
        return 0;
    }

};


int main(){


    SBI s;
    s.upi();

}