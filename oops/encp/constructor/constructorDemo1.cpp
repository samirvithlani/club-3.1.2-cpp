#include<iostream>
using namespace std;

class Bank{

    public:

    int id;
    Bank(){
        cout<<"\n Bank constructor called";
        cout<<"\n default constructor called";
        id =100;
    }


};

int main(){


    Bank b1; //default constructor called
    Bank b2; //default constructor called
    


}