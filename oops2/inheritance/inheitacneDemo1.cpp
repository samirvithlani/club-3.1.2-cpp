#include<iostream>
using namespace std;

class Gov{

    public:
    int fund = 12345;

    void parentDisplay(){
        cout<<"\n parent fund = "<<fund<<endl;
    }


};

class State : public Gov{


    public:
    void display(){
        cout<<"\n fund = "<<fund<<endl;
    }
};

int main(){


    State s;
    s.display();
    s.parentDisplay();

    Gov g;
    //g.display(); // error
   // g.parentDisplay();

}
