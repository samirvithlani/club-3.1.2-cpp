#include<iostream>
using namespace std;


string reverse(string name){
    string rev = "";
    for(int i=name.length()-1;i>=0;i--){
        //ava
        //rev =avaj
        rev = rev + name[i];
    }
    return rev;
}

int main(){

    string name = "java";
    string rev = reverse(name);
    cout<<"Reverse of name: "<<rev<<endl;

    return 0;

}