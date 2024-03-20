#include<iostream>

using namespace std;

int main(){

      //201 == a[0]
      //205 == a[1]
      //209 == a[2]
        int a[5] = {2,4,6,8,10};
        int *b;

        b = a; // do not provide &a, as a is already an address
        
        for(int i=0;i<5;i++){

            cout<<"\n"<<b[i];
        }
        
        // for(int i=0;i<5;i++){

        //     b[i] = a[i];
        // }

        // for(int i=0;i<5;i++){

        //     cout<<"\n"<<b[i];
        // }





}