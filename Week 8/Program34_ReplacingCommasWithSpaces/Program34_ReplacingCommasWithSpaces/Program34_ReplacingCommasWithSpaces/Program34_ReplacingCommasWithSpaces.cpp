#include <iostream>
#include <string>
using namespace std;

void comma2blank(char* textToChange)
{
    if (*textToChange == ',')
        *textToChange = ' ';
}

int main()
{
    string userInput;
    cout << "Please enter some text, in place of spaces, add comma's instead." << endl;
    getline(cin, userInput);
    string* userInputAd;
    for (int i = 0; i < userInput.length(); i++)
    {
        comma2blank(&userInput[i]);
    }
    cout << userInput << endl;
}
