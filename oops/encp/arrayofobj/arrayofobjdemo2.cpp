#include<iostream>
using namespace std;

class Employee{

    private:
    int id;
    char name[30];
    float salary;
    public:

    void getEmployeeDetails();
    void displayEmployeeDetails();
};

void Employee :: getEmployeeDetails(){
    //0th object
    //1st object
    //2nd object

    cout<<"\n Enter the id: ";
    cin>>id;
    cout<<"\n Enter the name: ";
    cin>>name;
    cout<<"\n Enter the salary: ";
    cin>>salary;


}

void Employee :: displayEmployeeDetails(){

    cout<<"\n employee id: "<<id;
    cout<<"\n employee name: "<<name;
    cout<<"\n employee salary: "<<salary;
}


//array of object...
int main(){

    Employee e[3]; // 0 --> 1 ->  2-->        
    /*
        employee e1;
        e1.id =101 
        print e1.id =  191
        employee e2;
        
        employee e3;
    */

    for(int i=0;i<3;i++){

        cout<<"\n Enter the details of "<<i+1<<" employee";
        e[i].getEmployeeDetails(); 

    }

    for(int i=0;i<3;i++){

        cout<<"\n Details of "<<i+1<<" employee";
        e[i].displayEmployeeDetails(); 
    }


}