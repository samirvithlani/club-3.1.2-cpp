//multipule 2 type
//1 parent 2 child
//2 parent 1 child
#include<iostream>
using namespace std;
class Netflix{


    public:
    int id;
    char name[20]="RAJ";
    void userAccount(){
        cout<<"User Account"<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"name = "<<name<<endl;
    }
};

class Movies: public Netflix{

    public:

    char movieName[20]= "Avengers";
    void movieList(){
        cout<<"User Name ="<<name<<endl; //parent class
        cout<<"Movie List"<<endl;
        cout<<"Movie Name = "<<movieName<<endl;
    }

};

class Series : public Netflix{

    public:

    char seriesName[20]= "Game of Thrones";
    void seriesList(){
        cout<<"User Name ="<<name<<endl; //parent class
        cout<<"Series List"<<endl;
        cout<<"Series Name = "<<seriesName<<endl;
    }

};


int main(){



    Movies m1;
    m1.movieList();

    Series s1;
    s1.seriesList();





}