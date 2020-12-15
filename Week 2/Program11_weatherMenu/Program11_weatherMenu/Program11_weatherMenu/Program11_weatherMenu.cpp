#include <iostream>
using namespace std;

int main()
{
    int playerInput;

    cout << "Please choose an option" << endl;
    cout << "1: Sunny    2: Cloudy     3: Raining     4: Exit" << endl;
    
    cin >> playerInput;

    switch (playerInput)
    {
        case 1:
            cout << "Don't forget sunscreen!" << endl;
        break;

        case 2:
            cout << "It's gonna be cloudy!" << endl;
        break;

        case 3:
            cout << "Make sure you have an umbrella!" << endl;
        break;

        case 4:
            cout << "Cya!" << endl;
        break;
    }
    
    return 0;
}