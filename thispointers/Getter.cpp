#include<iostream>
#include<string>
using namespace std;

class User{

    string name;
    int age;

    public:
    //setter //setter funcion return type must be void
    void setName(string name){
        this->name = name;
    }
    //getter
    string getName(){
        return this->name;
    }

    void setAge(int age){
        this->age = age;
    }

    int getAge(){
        return this->age;
    }




};

int main(){


    User u1;
    u1.setName("Ram");
    u1.setAge(25);

    cout<<"Name is ="<<u1.getName()<<endl;
    cout<<"Age is ="<<u1.getAge()<<endl;
    

}