#include<iostream>
using namespace std;

class Shape{

    public:
    void area(){
        cout<<"Area of Shape"<<endl;
    }

    void area(float r){
        float pi = 3.14;
        cout<<"Area of Circle"<<endl;
        cout<<"Area of Circle is: "<<pi*r*r<<endl;

    }
     int area(int s){
        cout<<"Area of Square"<<endl;
        cout<<"Area of Square is: "<<s*s<<endl;
        return s*s;
    }
    

    int area(int h,int w){
        cout<<"Area of Rectangle"<<endl;
        cout<<"Area of Rectangle is: "<<h*w<<endl;
        return h*w;
    }
    int area(long h,long w){
        cout<<"Area of Rectangle long"<<endl;
        cout<<"Area of Rectangle is long: "<<h*w<<endl;
        return h*w;
    }
   

};


int main(){

    Shape s;
    long l1 = 100;
    long l2 = 100;
    float r = 10.10;
    s.area(r);
    //s.area(10.10f);
    s.area(10);
    //s.area(98765432123,98765432123);
    //s.area(l1,l2);





}