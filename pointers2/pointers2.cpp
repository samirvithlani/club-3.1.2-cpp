#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *p;

    //size of int is 4 bytes
    cout<<"\n value of a ="<<a;
    cout<<"\n address of a ="<<&a;

    p = &a;

    cout<<"\n address of pointer = "<<p; //address of a
    p = p + 1; //p = p + 1*4 = p + 4 //4 bytes are added to the address of p
    cout<<"\n address of pointer after increment = "<<p; //address of a


}