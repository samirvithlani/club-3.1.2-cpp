#include<iostream>
using namespace std;

void change(int *p){ //x001

    *p = 1000; //x001

}

int main(){

    int a = 100; //x001
    cout<<"\n Before calling change() a = "<<a;
    change(&a);
    cout<<"\n After calling change() a = "<<a; //x001



}