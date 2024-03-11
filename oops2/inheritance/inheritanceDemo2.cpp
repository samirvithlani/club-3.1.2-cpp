#include<iostream>
#include<string>
using namespace std;

class India{

    public:
    string flag = "tricolor";

};
class Gujarat : public India{

    public:
    string capital = "gandhinagar";

    void display(){
        cout<<"\n flag gujarat = "<<flag<<endl;
        cout<<"\n capital gujarat = "<<capital<<endl;
    }

};

class Ahmedabad: public Gujarat{

    public: 
    int population = 123456;
    void display1(){
        cout<<"\n flag ahmedabad = "<<flag<<endl;
        cout<<"\n capital ahmedabad = "<<capital<<endl;
        cout<<"\n population ahmedabad = "<<population<<endl;
    }

};

int main(){

    // Ahmedabad a;
    // a.display(); 
    // a.display1();
    
    Gujarat g;
    g.display();
    //g.display1(); // error cz parent class can not use prop of child class....


}
