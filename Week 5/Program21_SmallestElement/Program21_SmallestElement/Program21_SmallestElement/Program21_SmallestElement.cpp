#include <iostream>
using namespace std;

int checkSmallest(int numArray[])
{
    int tempNum = numArray[0];
    for (int i = 0; i < 10; i++)
    {
        if (tempNum > numArray[i])
        {
            tempNum = numArray[i];
        }
    }
    return tempNum;
}

int main()
{
    int numArray[10];
    int smallestPos;
    cout << "Please enter 10 integers." << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numArray[i];
    }
    int smallest = checkSmallest(numArray);
    for (int i = 0; i < 10; i++)
    {
        if (smallest == numArray[i])
        {
            smallestPos = i;
        }
    }
    cout << "The smallest number you entered was " << smallest << ". It's position in the array is " << smallestPos << endl;
}