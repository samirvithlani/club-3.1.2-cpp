#include<iostream>
using namespace std;

class Shape{

    public:
    int height;
    int width;
    // void area(int a,int){

    // }
    
    // void area(float a,float b){

    // }
    
    void getSqArea(Shape s){ //sq
            
            cout<<"\n Area : "<<s.height*s.height;
    }
    void getRecArea(Shape s){
            
            cout<<"\n Area : "<<s.height*s.width;
    }


};
int main(){


    Shape sq;
    Shape rec;

    sq.height = 10;
    sq.width = 10;

    rec.height = 10;
    rec.width = 20;

    sq.getSqArea(sq);
    rec.getRecArea(rec);


}