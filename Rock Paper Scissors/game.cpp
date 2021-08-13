#include <iostream>
#include "klib.h"

using namespace std;

void evaluateHands(int player, int computer);
int promptPlayer();
void playGame();

int score = 0;
int computerScore = 0;

int main() 
{
    playGame();

    return 0;
}

void playGame() 
{
    string hands[3] = {"Rock", "Paper", "Scissors"};
    int winningScore = 3;
    int round = 1;

    cout << "-- Rock Paper Scissors --" << endl;

    while (score < winningScore && computerScore < winningScore)
    {
        int hand;
        int computerHand;

        cout << "-- Round " << round << " --" << endl;

        bool validHand = false;
        hand = promptPlayer() - 1;
        if(hand == 0 || hand == 1 || hand == 2) 
        {
            validHand = true;
        }
        while (!validHand)
        {
            cout << "Invalid choice. Try again." << endl;
            hand = promptPlayer() - 1;
            if(hand == 0 || hand == 1 || hand == 2) 
            {
                validHand = true;
            }
        }
        cout << "You played: " << hands[hand] << endl;

        cout << "-- Computer's Turn --\n";
        computerHand = randomRange(0, 2);
        cout << "Computer played: " << hands[computerHand] << endl;

        evaluateHands(hand, computerHand);
        cout << "Your score: " << score << endl;
        cout << "Computer's score: " << computerScore << endl;
        round++;
    }

    if(score > computerScore) 
    {
        cout << "You win the game!" << endl;
    }
    else if (score == computerScore)
    {
        cout << "The game is a tie!" << endl;
    }
    else 
    {
        cout << "Computer wins the game!" << endl;
    }

    score = 0;
    computerScore = 0;

    char ans;
    cout << "Play again? (Y/n): ";
    cin >> ans;
    tolower(ans);

    if(ans == 'y') 
    {
        playGame();
    }
}

int promptPlayer() 
{
    int choice;
    cout << "-- Your Turn --\n";
    cout << "Choices:\n";
    cout << "1) Rock\n";
    cout << "2) Paper\n";
    cout << "3) Scissors\n";
    cout << "Enter your choice (1, 2, 3): ";
    cin >> choice;

    return choice;
}

void evaluateHands(int player, int computer) 
{
    if(player == computer) 
    {
        cout << "You played the same hand!" << endl;
        cout << "Tie!" << endl;
        return;
    }
    else if (player == 0 && computer == 1)
    {
        cout << "Paper wins against rock!" << endl;
        cout << "Computer wins the round!" << endl;
        computerScore++;
    }
    else if (player == 0 && computer == 2)
    {
        cout << "Rock wins against scissors!" << endl;
        cout << "You win the round!" << endl;
        score++;
    }
    else if (player == 1 && computer == 0)
    {
        cout << "Paper wins against rock!" << endl;
        cout << "You win the round!" << endl;
        score++;
    }
    else if (player == 1 && computer == 2)
    {
        cout << "Scissors wins against paper!" << endl;
        cout << "Computer wins the round!" << endl;
        computerScore++;
    }
    else if (player == 2 && computer == 0)
    {
        cout << "Rock wins against scissors!" << endl;
        cout << "You win the round!" << endl;
        computerScore++;
    }
    else if (player == 2 && computer == 1)
    {
        cout << "Scissors wins against paper!" << endl;
        cout << "You win the round!" << endl;
        score++;
    }
}
