#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool xReplaced = false;
    bool nameLonger = false;
    string firstName;
    string secondName;
    string testString = "Do you know who loves C++? XX does!";
    cout << "Please enter your name" << endl;
    cin >> firstName;
    size_t xPos = testString.find("X");
    testString.insert(xPos + 1, firstName);
    cout << testString << endl;

    while (!xReplaced)
    {
        size_t xFound = testString.find("X");
        if (xFound != std::string::npos)
            testString.replace(xFound, 1, "");
        else
            xReplaced = true;
    }

    cout << testString << endl;

    while (!nameLonger)
    {
        cout << "Please enter a name that is longer than your own" << endl;
        cin >> secondName;
        if (secondName.length() > firstName.length())
            nameLonger = true;
    }
    size_t namePos = testString.find(firstName);
    testString.replace(namePos, (firstName.length()), secondName);
    cout << testString << endl;
}