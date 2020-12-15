#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userSentence;
    bool allReplaced = false;
    cout << "Please enter a sentence" << endl;
    getline(cin,userSentence);
    cout << userSentence << endl;

    while (!allReplaced)
    {
        size_t found = userSentence.find("e");
        if (found != std::string::npos)
            userSentence.replace(found, 1, "X");
        else
            allReplaced = true;
    }

    cout << userSentence << endl;
    
}