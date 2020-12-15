#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> userChoice;
    vector<string> userInv;
    string userInput;
    int userInt;
    bool validChoice = false;
    int inventoryMax = 3;
    userInv.push_back("sword");

    while (userInv.size() < inventoryMax)
    {
        while (!validChoice)
        {
            cout << "Type which item you wish to keep: Staff or Knife" << endl;
            getline(cin, userInput);
            if (userInput == "Staff" or userInput == "staff" or userInput == "Knife" or userInput == "knife")
                validChoice = true;
        }
        validChoice = false;
        userInv.push_back(userInput);
        cout << "Your inventory holds:" << endl;
        for (int i = 0; i < userInv.size(); i++)
            cout << userInv[i] << endl;

        while (!validChoice)
        { 
            cout << "Type which item you wish to keep: Healing potion or Fire Spell" << endl;
            getline(cin, userInput);
            if (userInput == "Healing potion" or userInput == "healing potion" or userInput == "Fire spell" or userInput == "fire spell")
                validChoice = true;
        }
        validChoice = false;
        userInv.push_back(userInput);
        cout << "Your inventory holds:" << endl;
        for (int i = 0; i < userInv.size(); i++)
            cout << userInv[i] << endl;

    }

    cout << endl << "Your inventory is full!" << endl << endl;

    while (!validChoice)
    {
        cout << "You have found a magic ring, what would you like to replace in your inventory?" << endl;
        cout << "Choices:" << endl;
        for (int i = 0; i < userInv.size(); i++)
            cout << i + 1 << ": " << userInv[i] << endl;
        cout << endl;
        cin >> userInt;
        for (int i = 0; i < userInv.size(); i++)
        {
            if (userInt == i)
            {
                validChoice = true;
                userInv[i] = "magic ring";
            }
        }
    }
    cout << endl << "Inventory is now:" << endl;
    for (int i = 0; i < userInv.size(); i++)
        cout << userInv[i] << endl;

    cout << endl << "You have been robbed!!" << endl;
    userInv.clear();
    cout << "Your inventory is now:" << endl;
    if (userInv.empty())
        cout << "Empty!" << endl;
}