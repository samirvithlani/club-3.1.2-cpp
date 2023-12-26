#include<iostream>

using namespace std;
class B;
class A{

    public:
    int x =100;

    void friend iamFriend(A aObj,B bObj);

};


class B{

    public:
    int y = 200;
    void friend iamFriend(A aObj,B bObj);

};


void  iamFriend(A aObj,B bObj){

    cout<<"\n friend function ";
    cout<<"\n "<<aObj.x;
    cout<<"\n "<<bObj.y;

    int ans = aObj.x + bObj.y;
    cout<<"\n "<<ans;

}

int main(){

    A a;
    B b;

    iamFriend(a,b);
}