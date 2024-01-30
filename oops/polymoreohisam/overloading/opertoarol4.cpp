#include<iostream>
using namespace std;


class Compare{

    public:
    int a;
    int b;
    int c;

    bool operator >(Compare &c){
        cout<<"> called..";
        return this->a > c.a and this->b > c.b and this->c > c.c;
    };
    bool operator ==(Compare &c){
            
            cout<<"==called..";
            return this->a == c.a and this->b == c.b and this->c == c.c;
        
    }

};


int main(){


    Compare c1,c2;
    c1.a =100;
    c2.a = 100;
    c1.b = 10;
    c2.b = 10;
    c1.c = 10;
    c2.c = 10;
    if(c1>c2){

        cout<<"c1 is greater than c2"<<endl;

    }
    else if(c1==c2){
        cout<<"c1 is equal to c2"<<endl;
    }
    else{
        cout<<"c2 is greater than c1"<<endl;
    }

}