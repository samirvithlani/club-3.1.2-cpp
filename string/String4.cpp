#include<iostream>
#include<string>

using namespace std;

int main(){

    string name;
    int count = 1;
    cout<<"\n Enter your name: ";
    getline(cin, name);
    for(int i=0;i<name.length();i++){
        if(name[i]==' '){
            count++;
        }
    }
    cout<<"\n Number of words in your name: "<<count<<endl;




}