#include<iostream>
using namespace std;

class Tata{


    
    public:
    int id;
    void getTata(Tata &t){

        cout<<"\n id = "<<t.id;
    }

};

int main(){


    Tata t1;
    t1.id = 1000;
    t1.getTata(t1);
    Tata t2;
    t2.id = 2000;
    t2.getTata(t2);



}