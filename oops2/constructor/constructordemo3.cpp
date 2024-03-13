#include<iostream>
using namespace std;

class Shape{

    public:
    int length=100;
    int breadth=200;

    Shape(int l,int b){
        // length = l;
        // breadth = b;
    }

    void area(){
        cout<<"Area of shape is "<<length*breadth<<endl;
    }


};

int main(){


        Shape s1(10,20);
        s1.area();

        Shape s2(30,40);
        s2.area();




}