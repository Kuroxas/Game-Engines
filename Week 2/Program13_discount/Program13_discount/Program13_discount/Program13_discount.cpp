#include <iostream>
using namespace std;

int main()
{
    char userStatus;
    int userGame;

    cout << "Please tell me your status with s if you're a student, t if you're a teacher or o for other " << endl;
    cin >> userStatus;

    cout << "What game would you like? 1 or 2?" << endl;
    cin >> userGame;

    if (userStatus == 's')
    {
        if (userGame == 1)
            cout << "You can get a 20% discount" << endl;
        else if (userGame == 2)
            cout << "You can get a 10% discount" << endl;
    }
    else if (userStatus == 't')
    {
        if (userGame == 1)
            cout << "You can get a 20% discount" << endl;
        else if (userGame == 2)
            cout << "You can get a 10% discount" << endl;
    }
    else
        cout << "You are not entitled to a discount" << endl;
}