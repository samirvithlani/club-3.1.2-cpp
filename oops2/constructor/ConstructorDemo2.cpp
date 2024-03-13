#include<iostream>
using namespace std;

class Android{


    public:
    int version; //n copy //10
    Android(int v){

        //parameterized constructor
        version = v;
        cout<<"Constructor called"<<endl;

    }

    void motorola(){
        cout<<"Motorola method called"<<endl;
        cout<<"Version is "<<version<<endl; //10
    }

    void samsung(){
        cout<<"Samsung method called"<<endl;
        cout<<"Version is "<<version<<endl; //11
    }


};

int main(){



    //Android a; //error
    Android m(10); //constructor called
    m.motorola();

    Android s(11); //constructor called
    s.samsung();
    
    


}