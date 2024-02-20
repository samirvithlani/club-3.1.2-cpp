#include<iostream>

using namespace std;

int main(){


    int a = 10;
    int *p = NULL;
    cout<<"Address of p = "<<&p<<endl;


    if(p ==NULL){
        cout<<"Pointer is NULL"<<endl;
    }
    else{
        cout<<"Pointer is not NULL"<<endl;
    }


}