#include<iostream>
using namespace std;

class Test{

    public:

    int no1 = 100;

    void getObject(Test t1){ //.t1 ->amit no1 -> 1000

        cout<<"Object is created"<<endl;
        cout<<"Value of no1 is using t1 object "<<t1.no1<<endl;
        
        
    }

};



int main(){


    Test t;  /// amit --> 1000
    t.no1 = 1000;
    Test t2;
    t2.no1 = 2000;
    t.getObject(t2);
    


}