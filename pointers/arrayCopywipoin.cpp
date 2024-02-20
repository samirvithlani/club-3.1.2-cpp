#include<iostream>

using namespace std;

int main(){


    //001     //001 //002 //003 //004 //005
    int a[5] = {1, 2, 3, 4, 5};
    int *b;
    //001
    b = a;

    for(int i=0;i<5;i++){
        // b[001] //1
        // b[002] //2
        // b[003] //3
        cout<<b[i]<<endl;
    }



}