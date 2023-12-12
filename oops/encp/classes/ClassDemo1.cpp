#include<iostream>
using namespace std; //std is a namespace

//class name must starts with capital letter
class Demo{

    //by default private..
    //and private members are not accessible outside the class
    //we have to make it public....

    public:
    int no1=10;  //this is propert of class...

};

int main(){

    //needs create an object of class
    Demo d;  //d is an object of class Demo
    cout<<"d = "<<d.no1;


}