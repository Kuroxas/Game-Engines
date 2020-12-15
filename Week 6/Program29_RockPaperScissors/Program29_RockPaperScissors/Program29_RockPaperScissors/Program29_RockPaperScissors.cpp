#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int userWins()
{
    cout << "Congratulations, you win!" << endl;
    return(1);
}

int cpuWins()
{
    cout << "The computer wins this round" << endl;
    return(1);
}

int cpuDecision()
{
    srand(time(NULL));
    int cpuNum = rand() % 3 + 1;
    return cpuNum;
}

int main()
{
    bool validChoice = false;
    string choices[3] = {"rock", "paper", "scissors"};
    string userInput;
    string cpuChoice;
    int userScore = 0;
    int cpuScore = 0;
    int cpuNum;
    int winningScore = 3;
    bool playing = true;
    while (playing)
    {
        while (!validChoice)
        {
            cout << "Enter your selection: ";
            cin >> userInput;
            for (int i = 0; i < userInput.length(); i++)
                userInput[i] = tolower(userInput[i]);
            if (userInput == "paper" or userInput == "rock" or userInput == "scissors")
                validChoice = true;
        }
        cpuNum = cpuDecision();
        for (int i = 0; i < 3; i++)
        {
            if (cpuNum == i + 1)
                cpuChoice = choices[i];
        }
        validChoice = false;
        cout << "You chose: " << userInput << endl;
        cout << "The computer chose: " << cpuChoice << endl;
        if (userInput == "rock" and cpuChoice == "scissors")
            userScore += userWins();
        else if (userInput == "scissors" and cpuChoice == "rock")
            cpuScore += cpuWins();
        else if (userInput == "scissors" and cpuChoice == "paper")
            userScore += userWins();
        else if (userInput == "paper" and cpuChoice == "scissors")
            cpuScore += cpuWins();
        else if (userInput == "paper" and cpuChoice == "rock")
            userScore += userWins();
        else if (userInput == "rock" and cpuChoice == "paper")
            cpuScore += cpuWins();
        else
            cout << "It was a draw." << endl;

        cout << "You need: " << winningScore - userScore << " to complete the game." << endl;
        cout << "The computer needs: " << winningScore - cpuScore << " to complete the game." << endl;
        cout << "*********************************" << endl;

        if (userScore == 3)
        {
            playing = false;
            cout << "Congratulations you won..." << endl;
        }
        else if (cpuScore == 3)
        {
            playing = false;
            cout << "The computer has won..." << endl;
        }
    }
    cout << "Game over..." << endl;
}