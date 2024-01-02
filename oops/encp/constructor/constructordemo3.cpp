#include<iostream>
using namespace std;

class Student{

    public:

    // Student(int id){
    //     cout<<"\n Student constructor called";
    //     cout<<"\n parameterized constructor called";
    //     cout<<"\n id: "<<id;
    // }

    // Student(char name[20]){
    //     cout<<"\n Student constructor called";
    //     cout<<"\n parameterized constructor called";
    //     cout<<"\n name: "<<name;
    // }

    Student(int id,char name[20]){
        cout<<"\n Student constructor called";
        cout<<"\n parameterized constructor called";
        cout<<"\n id: "<<id;
        cout<<"\n name: "<<name;
    }
    
};

int main(){

    //Student s1(100); //default constructor called
//    Student s2("Ravi"); //default constructor called
    Student s3(100,"Ravi"); //default constructor called

}