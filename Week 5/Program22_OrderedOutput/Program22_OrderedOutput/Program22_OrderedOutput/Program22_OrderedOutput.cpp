#include <iostream>
using namespace std;

int main()
{
    int numArray[5];
    int largestNum = 0;
    int largestPos;

    cout << "Please enter 5 integers." << endl;
    for (int i = 0; i < 5; i++)
        cin >> numArray[i];
    for (int i = 0; i < 5; i++)
        cout << numArray[i] << " ";
    cout << endl;
    for (int i = 4; i >= 0; i--)
        cout << numArray[i] << " ";
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        if (largestNum < numArray[i])
        {
            largestNum = numArray[i];
            largestPos = i + 1;
        }
    }
    cout << "The largest number in the array is: " << largestNum << ". The position in the array is: " << largestPos << endl;
}
