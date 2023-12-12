#include<iostream>

using namespace std; //std is a namespace
//what is namespace??   namespace is a collection of classes, objects, functions, variables etc.

int main(){


    //printf("Hello World\n"); //function...
    int a = 10;
    std::cout<<"Hello world"; //cout is an object of output stream class
    cout<<"\n HI this is is without std::";
    cout<<"\n value of a = "<<a;

    //scanf...("%d")
    int b;
    cout<<"\n enter value of b :";
    cin>>b; // cin is an object of input stream class

    cout<<"\n value of b = "<<b;


    return 0;
}