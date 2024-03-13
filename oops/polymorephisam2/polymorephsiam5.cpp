#include<iostream>
#include<string>
using namespace std;

class Person{


    public:
    virtual string walk() = 0;
    void test(){
        cout<<"Person test"<<endl;
    }

};


class Student : public Person{

    public:
    string walk(){
        return "Student is walking";
    }

};
class Teacher : public Person{

    public:
    string walk(){
        return "Teacher is walking";
    }

};
class Farmer : public Person{

    public:
    string walk(){
        return "Farmer is walking";
    }

};

int main(){


    //  Person *p ;
    //  //p->test();
    // Student s;
    // // Teacher t;
    // // Farmer f;
    // p = &s;
    // p->test();
    // p = &t;
    // string msg = p->walk();
    // cout<<msg<<endl;

    //Person p;
//    s.walk();
    //s.test();
    
    

}