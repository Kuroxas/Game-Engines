#include <iostream>
using namespace std;

int main()
{
    int userNum;
    char userChoice;

    while(true)
    {
        userChoice = 'X';
        cout << "Input a number between 1 and 10." << endl;
        cin >> userNum;
        string stars = "";

        if (userNum >= 1 and userNum <= 10)
        {
            for (int i = 0; i < userNum; i++)
            {
                stars += "*";
                cout << stars << endl;
            }
        }

        while (userChoice != 'Y' && userChoice != 'N')
        {
            cout << "Would you like to have another go?[Y for yes, N for no]" << endl;
            cin >> userChoice;

            // toupper will turn the char stored into an uppercase letter, so the program will still do as intended even if user has not input an uppercase letter
            userChoice = toupper(userChoice);
        }

        if (userChoice == 'N')
            break;
    }
        
}