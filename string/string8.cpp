#include<iostream>
#include<string>
using namespace std;


int findIndex(string name,char c){

    int index = -1;
    for(int i=0;i<name.length();i++){

        if(name[i] == c){
            index = i;
            
        }


    }
    return index;
}

int main(){


    int x = findIndex("hi india",'i');
    cout<<"x = "<<x<<endl;


}