#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool playing = true;

void attackChoice(int choice)
{
    const int swordDamage = 300;
    const int magicDamage = 650;
    const int axeDamage = 450;
    const int trollSword = 350;
    const int trollMagic = 50;
    const int trollAxe = 100;

    switch (choice)
    {
        case 1:
            enemyHealth -= swordDamage;
            playerHealth -= trollSword;
            cout << "You have hit the Troll!\n You have been hit!" << endl;
            if (playerHealth < 0)
                playerHealth = 0;
            if (enemyHealth < 0)
                enemyHealth = 0;
            cout << "Your current health: " << playerHealth << endl;
            cout << "Enemy current health: " << enemyHealth << endl;
            break;

        case 2:
            enemyHealth -= magicDamage;
            playerHealth -= trollMagic;
            cout << "You have hit the Troll!\n You have been hit!" << endl;
            if (playerHealth < 0)
                playerHealth = 0;
            if (enemyHealth < 0)
                enemyHealth = 0;
            cout << "Your current health: " << playerHealth << endl;
            cout << "Enemy current health: " << enemyHealth << endl;
            break;
        
        case 3:
            enemyHealth -= axeDamage;
            playerHealth -= trollAxe;
            cout << "You have hit the Troll!\n You have been hit!" << endl;
            if (playerHealth < 0)
                playerHealth = 0;
            if (enemyHealth < 0)
                enemyHealth = 0;
            cout << "Your current health: " << playerHealth << endl;
            cout << "Enemy current health: " << enemyHealth << endl;
            break;
    }
}

bool playState()
{
    char playAgain = 'X';
    if (enemyHealth <= 0)
    {
        cout << "You have killed the troll and won!" << endl;
        while (playAgain != 'Y' && playAgain != 'N')
        {
            cout << "Would you like to play again? (Y for yes, N for no)" << endl;
            cin >> playAgain;
        }
        if (playAgain == 'Y')
        {
            playerHealth = 1000;
            enemyHealth = 2000;
        }
        else
            return false;
    }
    if (playerHealth <= 0)
    {
        cout << "You have been killed! You lose!" << endl;
        while (playAgain != 'Y' && playAgain != 'N')
        {
            cout << "Would you like to play again? (Y for yes, N for no)" << endl;
            cin >> playAgain;
        }
        if (playAgain == 'Y')
        {
            playerHealth = 1000;
            enemyHealth = 2000;
        }
        else
            return false;

    }
    return true;
}

int main()
{
    int playerChoice = 0;
    cout << "You have met a troll. "<< endl;

    while (playing)
    {
        cout << "You have 3 options of attack\n 1:Use sword\n 2:Use magic\n 3:Use axe\n Each choice has different effects" << endl;
        cin >> playerChoice;
        
        attackChoice(playerChoice);
        playing = playState();
    }
}
