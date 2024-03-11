#include<iostream>
using namespace std;

class Test{

    int y=200;
    public:
    int x=20; //garbage value //class leval //instance variable

    void myData(){
        cout<<"\n my data function called..."<<endl;
        cout<<"\n x inside myData ="<<x;
        cout<<"\n y inside myData ="<<y;
    }

    int sum(int a,int b); //declaration
};

int Test :: sum(int a,int b){

    return a+b;
}

int main(){

    int x=100; //local variable
    //t is an object of class...
    Test t;
    cout<<"\n x = "<<t.x;
    cout<<"\n value of local x = "<<x;
    t.myData();
    int ans = t.sum(100,200);
    cout<<"\n sum = "<<ans;


}