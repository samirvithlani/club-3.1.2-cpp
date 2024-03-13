#include<iostream>
using namespace std;

class Bank{

    public:
    int x;
    Bank(){
        x = 10;
        cout<<"Constructor called"<<endl;
        //default constructor
    }

    void test(){
        cout<<"Test method called"<<endl;
        cout<<"Value of x is "<<x<<endl;
    }

};

int main(){

    Bank b1; //constructor called 
    b1.test();
    


}