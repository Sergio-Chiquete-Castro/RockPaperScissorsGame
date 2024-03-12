#include <iostream>
#include<string>
#include <algorithm>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

//logic 
/*
Rock vs. Rock: Tie.
Rock vs. Paper: Paper wins.
Rock vs. Scissors: Rock wins.
Paper vs. Rock: Paper wins.
Paper vs. Paper: Tie.
Paper vs. Scissors: Scissors win.
Scissors vs. Rock: Rock wins.
Scissors vs. Paper: Scissors win.
Scissors vs. Scissors: Tie.
*/

class RPS{

private:
string choice;
string rock ="rock";
string paper="paper";
string scissors="scissors";
string randword;
//rand
int randomIndex = rand() % 3;
//rand

public:
void start(){chooseRPS();}

void chooseRPS(){
cout<<"------------------------------"<<endl;
cout<<"Rock, Paper, or Scissors?: ";
cin>>choice;
cout<<"------------------------------"<<endl;

 toLowerCase();
 
 }

void toLowerCase(){
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);


    if(choice !=rock && choice !=paper && choice !=scissors ){
    cout<<"Please enter the correct words"<<endl;
    start();
    }
    else{
    cout << "your choice is: "<<choice<<endl;
    cout<<"------------------------------"<<endl;

    randomChoice();
    
    }
 }
 
 void randomChoice(){
     //for rand
         srand(time(0));

    string words[] = {"rock", "paper", "scissors"};
 //for rand
    cout << "Randomly picked word: " << words[randomIndex] << endl;
    cout<<"------------------------------"<<endl;

    randword =  words[randomIndex];
    
    
     winORlose();
 }
 
 void winORlose(){
    if(choice==rock && randword==paper){
        cout<<"You Lose"<<endl;
    }else if(choice==rock && randword==scissors){
        cout<<"You Win"<<endl;
    }else if(choice==paper && randword==rock){
        cout<<"You Win"<<endl;
    }
    else if(choice==paper && randword==scissors){
        cout<<"You Lose"<<endl;
    } else if(choice==scissors && randword==rock){
        cout<<"You Lose"<<endl;
    }
    else if(choice==scissors && randword==paper){
        cout<<"You Win"<<endl;
    }
    else{
        tie();
    }
    
    
}
// Rock vs. Rock: Tie.
// Paper vs. Paper: Tie.
// Scissors vs. Scissors: Tie.
void tie(){
    
    if(choice==rock && randword==rock){
        cout<<"Its a tie"<<endl;
    }else if(choice==paper && randword==paper){
        cout<<"Its a tie"<<endl;
    }
    else{
        cout<<"Its a tie"<<endl;
    }
}

};




int main(){

    RPS s;

    s.start();

}








