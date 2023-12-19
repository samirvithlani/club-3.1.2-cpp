#include<iostream>
using namespace std;

class Calc{

    public:

    int a,b;

    void add(Calc c){

        cout<<"\n Add function";
        cout<<"\n "<<c.a+c.b;
    }


};
int main(){


    Calc c;
    Calc c1;
    

    c.a = 10;
    c.b = 20;

    c1.add(c);




}