#include<iostream>
using namespace std;

class Shape{

    public:
    virtual void draw() =0;
};

class Circle: public Shape{

    public:
    void draw(){
        cout<<"\n Circle is drawn\n";
    }

};

class Rectangle : public Shape{

public:
    void draw(){
        cout<<"\n Rectangle is drawn\n";
    }

};

int main()
{
    Shape *s;
    Circle c;
    s = &c;
    s->draw();

    Rectangle r;
    s = &r;
    s->draw();

}