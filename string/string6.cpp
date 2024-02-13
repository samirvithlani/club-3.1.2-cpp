//name = tempname
//raj = ram

//match

#include<iostream>
#include<string>
using namespace std;

int main(){

    string name = "ram";
    string tempname = "raj";
    int flag = 1;

    if(name.length() == tempname.length()){

        for(int i=0;i<name.length();i++){

            if(name[i]!=tempname[i]){
                flag = 0;
                break;
            }
            
        }
        


    }
    if(flag ==1){
        cout<<"Match"<<endl;
    }
    else{
        cout<<"No match"<<endl;
    }


    // if(name == tempname){
    //     cout<<"Match"<<endl;
    // }else{
    //     cout<<"No match"<<endl;
    // }



}