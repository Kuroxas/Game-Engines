#include <iostream>
using namespace std;

char cards[2][5] = {
    {'A','E','B','A','E'},
    {'C','C','D','B','D'}
};
bool cardsFound[2][5] = {
    {false, false, false, false, false},
    {false, false, false, false, false}
};
int attemptCount = 1;

void drawBoard()
{
    int currentNum;
    system("cls");
    cout << "Current amount of attempts: " << attemptCount << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            if (row == 1)
                currentNum = 5 + (column + 1);
            else
                currentNum = (column + 1);

            if (cardsFound[row][column])
                cout << "[" << cards[row][column] << "]";
            else
                cout << "[" << currentNum << "]";

            
        }
        cout << endl;
    }
}

void updateBoard(int guess1, int guess2)
{
    int currentNum;
    system("cls");
    cout << "Current amount of attempts: " << attemptCount << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 5; column++)
        {
            if (row == 1)
                currentNum = 5 + (column + 1);
            else
                currentNum = (column + 1);

            if (cardsFound[row][column] or currentNum == guess1 or currentNum == guess2)
                cout << "[" << cards[row][column] << "]";
            else
                cout << "[" << currentNum << "]";


        }
        cout << endl;
    }
}

int main()
{
    drawBoard();

    int guess1;
    int guess2;
    int currentNum;
    char card1;
    char card2;
    int matchScore = 0;
    while (matchScore != 5)
    {
        cout << "Please enter two card numbers you would like to flip" << endl;
        cin >> guess1;
        cin >> guess2;
        updateBoard(guess1, guess2);

        if (guess1 > 5)
            card1 = cards[1][guess1 - 6];
        else
            card1 = cards[0][guess1 - 1];

        if (guess2 > 5)
            card2 = cards[1][guess2 - 6];
        else
            card2 = cards[0][guess2 - 1];

        if (card1 == card2)
        {
            matchScore += 1;
            if (guess1 > 5)
                cardsFound[1][guess1 - 6] = true;
            else
                cardsFound[0][guess1 - 1] = true;

            if (guess2 > 5)
                cardsFound[1][guess2 - 6] = true;
            else
                cardsFound[0][guess2 - 1] = true;
        }
        else
            cout << "The cards do not match, try again." << endl;

        if (matchScore == 5)
            cout << "You have won the game! You took " << attemptCount << " attempts to win!" << endl;
        else
            attemptCount += 1;
    }
}