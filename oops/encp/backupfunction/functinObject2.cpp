#include<iostream>
using namespace std;

class Vehicle{

    public:

    int no1 = 10;

    void vehData(Vehicle v){

        cout<<"\n No1 : "<<v.no1;

    }


};

int main(){

    Vehicle v1;
    Vehicle v2;

    v1.no1 = 100;
    v2.no1 = 200;

    v1.vehData(v2);


}