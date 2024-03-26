#include<iostream>
#include<string>
using namespace std;

class Student{


    private:
    string name; // instance variable
    int age; //

    public:

    Student(string n,int a){
        name =n;
        age =a;
    }
    Student(){}
   

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

int main(){


    int stuCount;
    cout<<"\n enter the number of students: ";
    cin>>stuCount; //3
    // int a[100]; //int
    // float f [20]//float
    // char c[10]//char

    //use of new keyword is to create dynamic memory allocation
    //same as malloc in c
    //same as new in java
    //as array is static memory allocation
    //so using new keyword we can create dynamic memory allocation for array of objects here
    Student *stu = new Student[stuCount]; // array of objects
    

    //student information input...
    for(int i=0;i<stuCount;i++){
        string name;
        int age;
        _flushall();
        cout<<"\n enter name of  student "<<i+1<<": ";
        //cin>>name;
        getline(cin,name);
        _flushall();
        cout<<"\n enter age of student "<<i+1<<": ";
        cin>>age;
         
         //stu[0] = Student 1st object
         //stu[1] = Student 2nd object
        //stu[2] = Student 3rd object
        //stu[i]=Studen(name,age); // constructor call
        Student s(name,age); // raj,23 ,//parth 24
        stu[i] =s;
        //stu[i] = Student(name,age); 
        

    }

    cout<<"\n Student Information: ";
    for(int i=0;i<stuCount;i++){
        cout<<"\n Student "<<i+1<<": ";
        stu[i].display();
    }






}
