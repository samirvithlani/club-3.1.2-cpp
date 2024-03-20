#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *p;

    cout<<"\n value of a ="<<a;
    cout<<"\n address of a ="<<&a;

    cout<<"\n value of p = "<<*p;
    cout<<"\n address of p = "<<&p;

    p = &a;

    cout<<"\n after \n";
    cout<<"\n value of a ="<<a;
    cout<<"\n address of a ="<<&a;

    cout<<"\n value of p = "<<*p;
    cout<<"\n address of p = "<<p;

    *p = 100; //address cabin...

    cout<<"\n value of a ="<<a;
    cout<<"\n address of a ="<<&a;

    cout<<"\n value of p = "<<*p;
    cout<<"\n address of p = "<<p;
    



}