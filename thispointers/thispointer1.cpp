#include<iostream>
using namespace std;

class Employee{

    //instance variable --> class variable
    //local variable --> function variable

    public:
    int salary=1000;
    int a =100;

    void empData(int salary){

        cout<<"Salary is: "<<salary<<endl;
        cout<<"salary is ->" <<this->salary<<endl; //this pointer is used to access the class variable when local variable is having same name
        cout<<"a is ->" <<this->a<<endl; //this pointer is used to access the class variable when local variable is having same name
    }

 

};

int main(){

    Employee emp1;
    emp1.empData(2000);


}