#include<iostream>
using namespace std;


class Test{


    public:
    int a =10;

    void fun1(int x){

        cout<<"\n Fun1 function"<<x;

    }

    void fun2(Test t){
             //Test t2;
             //t = t1
            cout<<"\n Fun2 function";
            cout<<"\n "<<t.a;
    }


};

int main(){

    Test t1; // t1 is an object of class Test
    t1.a = 100;
    t1.fun1(10);
    cout<<"\n "<<t1.a;
    t1.fun2(t1);


}