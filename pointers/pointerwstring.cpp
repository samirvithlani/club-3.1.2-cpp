#include<iostream>

using namespace std;

int main(){

        int a[5]={1,2,3,4,5};
        //a
        //a[0] --> 1
        //a[1] --> 2
        cout<<"address of  ="<<&a<<endl;

        for(int i=0;i<5;i++){
            cout<<&a[i]<<endl;
        }






}