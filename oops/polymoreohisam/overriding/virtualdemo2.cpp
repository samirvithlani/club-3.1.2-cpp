#include<iostream>
using namespace std;


class TRAI{

public:
    virtual void call(int x)=0;

};

class JIO:public TRAI{

    public:
    void call1(int x){
        cout<<"Calling from JIO"<<endl;
    }
    void call(int x){
        cout<<"Calling from JIO"<<endl;
    }
    
   
};

int main(){
    JIO J;
    //J.call(5);
}