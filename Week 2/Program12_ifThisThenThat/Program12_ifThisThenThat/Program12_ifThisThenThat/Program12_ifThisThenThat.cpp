#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int userWeather;
    int userTemp;

    cout << "Enter 1 if it's raining, enter 2 if it's snowing, enter anything else if it isn't raining or snowing." << endl;
    cin >> userWeather;

    cout << "Enter the temperature in celsius." << endl;
    cin >> userTemp;

    if (userWeather == 1)
    {
        if (userTemp > 15)
            cout << "Wear a light raincoat." << endl;
        else
            cout << "Wear a thick coat." << endl;
    }
    else if (userWeather == 2)
    {
        if (userTemp > 5)
            cout << "Wear something warm" << endl;
        else if (userTemp > 0)
            cout << "Wrap up well" << endl;
        else
            cout << "Stay at home" << endl;
    }
    else
        cout << "Have a nice day!" << endl;
}