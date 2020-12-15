#include <iostream>
using namespace std;

int main()
{
    char charArray[50];
    cout << "Please input your First name inital, middle name initial(s) and your surname. All seperated by a space." << endl;
    cin.getline (charArray,50);
    for (int i = 0; i < strlen(charArray); i++)
    {
        if (charArray[i] == ' ')
            cout << endl;
        else
            cout << charArray[i];
        
    }
        
}