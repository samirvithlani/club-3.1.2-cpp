#include<iostream>
using namespace std;
class Area{

    public:
        int length;
        int breadth;

        void getSquareArea(Area a1){ //a1 -> sq

            cout<<"Area of square is "<<a1.length*a1.length<<endl;
        }
        void getRectangleArea(Area a1){ //a1 -> rect

            cout<<"Area of rectangle is "<<a1.length*a1.breadth<<endl;
        }

};



int main(){


    Area sq; //sq object...
    sq.length = 10;
    sq.breadth = 10;
    sq.getSquareArea(sq);

    Area rect;
    rect.length = 10;
    rect.breadth = 20;
    rect.getRectangleArea(rect);



}