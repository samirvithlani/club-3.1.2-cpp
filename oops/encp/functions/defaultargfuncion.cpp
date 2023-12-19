
#include<iostream>
using namespace std;
class Amazone{

    public:

    void orderItem(int itemNo=0,int qty =1){

        cout<<"\n Order item function";
        cout<<"\n Item no "<<itemNo;
        cout<<"\n Quantity "<<qty;
    };


};



int main(){

    Amazone a1;
    //a1.orderItem();
    //a1.orderItem(101);
    //a1.orderItem(101,5);

}