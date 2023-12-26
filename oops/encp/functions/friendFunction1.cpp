#include<iostream>
using namespace std;

class TeliPhone{
    
    public:
    int number = 1234567890;

    void notFriendFunction(){
        cout<<"I am not a friend function \n";
        cout<<number;
    }
    void notFriend2();

    void friend iamFriend(TeliPhone t);
};

void TeliPhone :: notFriend2(){
    cout<<"\n I am not a friend function \n";
    cout<<number;
}


//no need to use scope resolution operator
void iamFriend(TeliPhone t){
 
    cout<<"\n I am a friend function \n";
    cout<<t.number;
}




int main(){

    TeliPhone t;
    t.notFriendFunction();
    t.notFriend2();
    iamFriend(t);

}