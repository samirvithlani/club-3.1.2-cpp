#include<iostream>
using namespace std;

class Calc{

    public:
    int balance =100; //instance variable


    void deposit(int amount){ //local variable
        int balance = 220;

        cout<<"Local balance = "<<balance<<endl;
        cout<<"instance balance = "<<this->balance<<endl;
        this->balance = this->balance + amount;
        
    }

    void checkBalance(){
        cout<<"Balance = "<<balance<<endl;
    }


};

int main(){


    Calc c;
    c.deposit(1000);
    c.checkBalance();
    




}