#include<iostream>
using namespace std;

class Test1{

    public:
    int no1=10;
    void printData1(Test1 t){ 

        cout<<"\n No1 : "<<t.no1;
    }


};

int main(){


    Test1 t1;
    Test1 t2;
    t1.no1 = 100;
    t2.no1 = 200;
    printData1(t2);


return 0;


}