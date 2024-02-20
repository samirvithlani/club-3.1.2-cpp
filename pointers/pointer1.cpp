#include<iostream>
#include<string>
using namespace std;

//
int main(){


    int a = 10;
    int *p;
    p = &a; // p is a pointer to a

    cout<<"\n value of a = "<<a;
    cout<<"\n address of a = "<<&a; //001

    cout<<"\n\n value of p = "<<*p;       //-->10
    cout<<"\n address of p = "<<p; //001

    *p = 100; //001 -->100

    cout<<"\n\n value of a = "<<a; //100






}
