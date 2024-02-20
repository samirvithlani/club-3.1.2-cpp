#include<iostream>
#include<string>
using namespace std;

//pointer in function param....
//10
void change(int x){
    //002 --10

    cout<<"\n value of x = "<<x; //002 --10
    x =1000; //002 -->1000


}

int main(){


    int x=10; //001
    change(x);
    cout<<"\n after change function call....";
    cout<<"\n value of x = "<<x; //001 --10



}