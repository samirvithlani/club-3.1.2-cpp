#include<iostream>
#include<string>

using namespace std;

int main(){


    string name = "ram";
    string *p;
    p = &name; // p is a pointer to a

    cout<<"\n value of name = "<<*p;




}