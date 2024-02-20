#include<iostream>

using namespace std;

int main(){


    int a = 100;
    int *p;
    p = &a; // p is a pointer to a


    cout<<"\n value of a = "<<a; //100
    cout<<"\n address of a = "<<&a;//001

    cout<<"\n\n value of p = "<<*p; //100
    cout<<"\n address of p = "<<p; //001

    p++; // adress + 4 bytes //005

    cout<<"\n\n value of p = "<<*p;  //garbage
    cout<<"\n address of p = "<<p;  //005




}