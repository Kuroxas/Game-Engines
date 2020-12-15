#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    int damage;
    for (int i = 1; i < 11; i++)
    {   
        if (playerLife > 0)
        {
            std::cout << "Question" << i << ": How much damage shall I deal?\n";
            cin >> damage;
            playerLife -= damage;
            if (playerLife <= 0)
            {
                cout << "Early end. Player Died!" << endl;
                break;
            }
        }
        else
        {
            cout << "Early end. Player Died!" << endl;
            break;
        }

    }
    if (playerLife > 0)
        cout << "All questions asked. Player survived!" << endl;

}