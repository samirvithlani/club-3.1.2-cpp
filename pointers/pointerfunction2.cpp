#include<iostream>
using namespace std;

void file(){

        cout<<"File is opened"<<endl;
}

void database(){

        cout<<"Database is opened"<<endl;
}

int main()
{

    string input = "file";
    if(input == "file"){
        void(*p)() = file;
        p();
    }
    else{
        void(*p)() = database;
        p();
    }

    

}

