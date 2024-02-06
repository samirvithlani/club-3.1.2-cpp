#include<iostream>
using namespace std;


//Abstract class
class RBI{

    public:
    //pure virtual function
    virtual void withdraw() =0;


};

class SBI : public RBI{

    public:
    void withdraw(){
        cout<<"Withdraw from SBI"<<endl;
    }

};


int main(){


    SBI s;



}