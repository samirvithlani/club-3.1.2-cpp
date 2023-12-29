#include<iostream>
using namespace std;


class Bank{

    public:
    int balance = 1000;

    void withdraw(){
        cout<<"Withdraw"<<endl;
        cout<<"Balance is "<<balance<<endl;
    }

    void deposit();

    void friend atm(Bank b);

};

void Bank :: deposit(){
    cout<<"Deposit"<<endl;
    cout<<"Balance is "<<balance<<endl;
}

//it does not required scope resolution operator
void atm(Bank b){
    cout<<"ATM"<<endl;
    cout<<"Balance is "<<b.balance<<endl;
}

// friend function
//friend function can access private and protected data members of a class
//friend function does not belong to any class,and does not require object of class to access it
//friend function can be declared inside public,private or protected section of class
//friend function can be declared inside class or outside class
//friend function can be declared in another class
//



int main(){



    Bank b;
    b.withdraw();
    b.deposit();
    atm(b);


}