#include<iostream>

using namespace std;

class Shape{

    public:

    void getArea(){
        cout<<"Area of Shape"<<endl;
    }

    void getArea(char name[20]){
        cout<<"Area of Shape with string.."<<endl;
    }



    void getArea(int r){
        cout<<"Area of Circle = "<<3.14*r*r<<endl;
        
    }
    void getArea(int l, int b){
        cout<<"Area of Rectangle = "<<l*b<<endl;
    }
    void getArea(int l, int b, int h){
        cout<<"Area of Cuboid = "<<l*b*h<<endl;
    }


};

int main(){


    Shape s;
    s.getArea();
    //s.getArea("abc");
    s.getArea(10);
    s.getArea(10,20);



}