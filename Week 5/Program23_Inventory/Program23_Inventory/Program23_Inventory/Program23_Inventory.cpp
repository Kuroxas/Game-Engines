#include <iostream>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "Sword";
	inventory[numItems++] = "Battle Axe";
	inventory[numItems++] = "Healing Potion";
	inventory[numItems++] = "Dagger";

	cout << "You have picked up a Wizard's Staff! Would you like to swap it for your dagger? (Y for yes, N for no)" << endl;
	char userChoice = 'X';
	
	while (userChoice != 'Y' && userChoice != 'N')
	{
		cin >> userChoice;
		userChoice = toupper(userChoice);
	}

	if (userChoice == 'Y')
	{
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			if (inventory[i] == "Dagger")
				inventory[i] = "Wizard's Staff";
		}
	}
	else
		cout << "You have left the Wizard's Staff behind." << endl;

	cout << "Inventory: ";
	for (int i = 0; i < MAX_ITEMS; i++)
		cout << inventory[i] << ", ";
	cout << endl;
}