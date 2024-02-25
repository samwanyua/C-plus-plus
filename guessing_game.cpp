#include <iostream>
using namespace std;

int main(){

    int secretNumber = 4;
    int guess;
    int guessLimit = 4;
    int guessCount = 0;
    bool outOfGuesses = false;

    while(secretNumber != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter a guess: " << endl;
            cin >> guess;
            guessCount ++;
        }
        else{
            outOfGuesses = true;
        }

        
    }

    if(outOfGuesses){
        cout << "You loose" << endl;
    }
    else{
        cout << "You win!" << endl;

    }

    return 0;
}