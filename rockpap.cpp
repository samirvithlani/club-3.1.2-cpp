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
    // Write C++ code here
    std::cout << "Try programiz.pro";
    //enter your move...
    //rock
    
    char c1 = getComputerMove();
    cout<<"\n c1 = "<<c1;
    
    
    

    return 0;
}