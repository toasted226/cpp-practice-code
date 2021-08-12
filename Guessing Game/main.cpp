#include <iostream>
#include <cstdlib>
#include "klib.h"

using namespace std;

void playGuessingGame();

int main() 
{
    playGuessingGame();

    char ans;
    cout << "Play again? (Y / n): ";
    cin >> ans;
    ans = tolower(ans);
    
    if(ans == 'y') 
    {
        playGuessingGame();
    }

    return 0;
}

void playGuessingGame() 
{
    int secretNumber = randomRange(1, 5);
    int guess;
    int guessesMade = 0;
    int guessLimit = 3;

    cout << "\n-- Guess the secret number! --\n" << endl;

    while (guess != secretNumber && guessesMade < guessLimit)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess != secretNumber) 
        {
            guessesMade++;
            if(guessLimit - guessesMade != 1) 
            {
                cout << "Incorrect. " << guessLimit - guessesMade << " guesses remaining." << endl;
            }
            else
            {
                cout << "Incorrect. " << guessLimit - guessesMade << " guess remaining." << endl;
            }
        }
        else
        {
            cout << "That's correct!" << endl;
        }
    }
    
    if(guessesMade == guessLimit) 
    {
        cout << "You lose! The secret number was " << secretNumber << endl;
    }
    else
    {
        cout << "You win!" << endl;
    }
}
