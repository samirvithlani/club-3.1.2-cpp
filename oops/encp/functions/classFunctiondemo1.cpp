#include<iostream>
using namespace std;

//scope resolution operator ::

class Bank{

    // Private members //functions
    int netBalance= 0;  // private instance variable // class variable


    public: // Access specifier

    void deposit(int amount){
        netBalance = netBalance + amount;
        cout<<"Deposit function";
    }

    void withdraw(int amount);
    int checkBalance();

};

void Bank :: withdraw(int amount){

    if(amount> netBalance){
        cout<<"\n Insufficient balance";
        
    }
    else{
        netBalance = netBalance - amount;
        cout<<"\n Withdraw function";
    }
}

int Bank :: checkBalance(){
    cout<<"\n Check balance function";
    return netBalance;
}


int main(){

    Bank b1;
    b1.deposit(1000);
    b1.withdraw(5000);
    int bal = b1.checkBalance();
    cout<<"\n Balance is "<<bal;


}