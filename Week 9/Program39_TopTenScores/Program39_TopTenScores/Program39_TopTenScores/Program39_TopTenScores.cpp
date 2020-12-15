#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct leaderboard
{
    string name[10];
    int score[10];
};

void loadScores(leaderboard *scoreBoard)
{
    ifstream in_stream;
    in_stream.open("scores.txt");
    int count = 0;
    if (in_stream.is_open())
    {
        while (in_stream >> (*scoreBoard).name[count])
        {
            in_stream >> (*scoreBoard).score[count];
            count += 1;
        }

    }
    else
        cout << "The text file for the Scoreboard does not exist or it cannot be opened!" << endl;
    in_stream.close();
    
}

void displayScore(leaderboard *scoreBoard)
{
    int count = 1;
    cout << "__________________________________________________________" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Rank " << count << ":     " << "Name: " << (*scoreBoard).name[i] << "          Score: " << (*scoreBoard).score[i] << endl;
        cout << "__________________________________________________________" << endl;
        count += 1;
    }
}

void countScores(int userScore, string userName, leaderboard *scoreBoard)
{
    int leaderboardLen = *(&(*scoreBoard).name + 1) - (*scoreBoard).name;
    if (leaderboardLen == 10)
    {
        for (int i = 0; i < leaderboardLen; i++)
        {
            if (userScore > (*scoreBoard).score[i])
            {
                if (i < 9)
                {
                    for (int num = 9; num > i; num--)
                    {
                        (*scoreBoard).score[num] = (*scoreBoard).score[num - 1];
                        (*scoreBoard).name[num] = (*scoreBoard).name[num - 1];
                    }
                    (*scoreBoard).score[i] = userScore;
                    (*scoreBoard).name[i] = userName;
                    break;
                }
                else
                    (*scoreBoard).score[i] = userScore;
                (*scoreBoard).name[i] = userName;
            }
        }
    }
    else
    {
        for (int i = 0; i < leaderboardLen; i++)
        {
            if (userScore > (*scoreBoard).score[i])
            {
                for (int num = leaderboardLen - 1; num > i; num--)
                {
                    (*scoreBoard).score[num] = (*scoreBoard).score[num - 1];
                }
                (*scoreBoard).score[i] = userScore;
                break;
            }
        }
    }
}

void savedScores(leaderboard *scoreBoard)
{
    ofstream out_stream;
    out_stream.open("scores.txt", ios::out | ios::trunc);
    if (out_stream.is_open())
    {
        for (int i = 0; i < 10; i++)
        {
            out_stream << (*scoreBoard).name[i] << endl;
            out_stream << (*scoreBoard).score[i] << endl;
        }
    }
    else
        cout << "The text file for the Scoreboard does not exist or it cannot be opened!" << endl;

    out_stream.close();
}

void enterScore(leaderboard *scoreBoard)
{
    string userName;
    int userScore;
    cout << "Please enter the name you wish to submit the score under: " << endl;
    cin >> userName;
    cout << "Please enter the score you wish to submit: " << endl;
    cin >> userScore;
    countScores(userScore, userName, &(*scoreBoard));
    savedScores(&(*scoreBoard));
}

int main()
{
    leaderboard scoreBoard;
    int userInput;
    loadScores(&scoreBoard);
    while (true)
    {
        cout << "Please enter one of the following options: " << endl;
        cout << "1: Enter a score " << endl;
        cout << "2: Display scores " << endl;
        cout << "3: Exit" << endl;
        cin >> userInput;

        if (userInput == 1)
            enterScore(&scoreBoard);
        else if (userInput == 2)
            displayScore(&scoreBoard);
        else if (userInput == 3)
            break;
        else
            cout << "Invalid response has been entered." << endl;
    }
}