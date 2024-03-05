// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std; 
  
// get the computer move 
char getComputerMove() 
{ 
    int move; 
    // generating random number between 0 - 2 
    srand(time(NULL)); 
    move = rand() % 3; 
  
    // returning move based on the random number generated 
    if (move == 0) { 
        return 'p'; 
    } 
    else if (move == 1) { 
        return 's'; 
    } 
    return 'r'; 
} 

int main() {


    int score = 0;
    while(true){

        char move;
        cout<<"\n Enter your move: ";
        cin>>move;

        cout<<"\n your move is "<<move;

        char c1 = getComputerMove();
        cout<<"\n computer move is = "<<c1;

        if(move == c1){
            cout<<"\n Tie";
        }
        else if((move == 'r' && c1 == 's') || (move == 's' && c1 == 'p') || (move == 'p' && c1 == 'r')){

            cout<<"\n user wins";
            score++;

        }
        else{
            cout<<"\n computer wins";
            break;
            
        }
            
    }
    cout<<"\n your score is "<<score;
    return 0;
}