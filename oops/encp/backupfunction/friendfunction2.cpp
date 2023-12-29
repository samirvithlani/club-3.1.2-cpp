#include<iostream>
using namespace std;

class B;
class A{

    public:
    int amount = 10000;
    void friend fun(A a,B b);

};

class B{

    public:
    int rs = 100;
    void friend fun(A a,B b);

};


void fun(A a,B b){
    cout<<"Friend function"<<endl;
    cout<<"Amount is "<<a.amount<<endl;
    cout<<"Rs is "<<b.rs<<endl;
}




int main(){

    A aobj;
    B bobj;
    fun(aobj,bobj);

}
