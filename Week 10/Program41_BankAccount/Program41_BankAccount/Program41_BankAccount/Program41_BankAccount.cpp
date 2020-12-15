#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int userChoice;
    int secondChoice;
    bool exit = false;
    bool exit2 = false;
    while (!exit)
    {
        cout << "1: Open a new account" << endl;
        cout << "2: View an account" << endl;
        cout << "3: Close an account" << endl;
        cout << "4: Exit Program" << endl;
        cin >> userChoice;
        switch (userChoice)
        {
        case 1:
            while (!exit2)
            {
                cout << "1: General account" << endl;
                cout << "2: Junior account" << endl;
                cout << "3: Savings account" << endl;
                cout << "4: Return to main menu" << endl;
                cin >> secondChoice;
                switch (secondChoice)
                {
                case 1:
                case 2:
                case 3:
                case 4:
                    exit2 = true;
                }
            }
        case 2:
        case 3:
        case 4:
            exit = true;
        }

    }
}
