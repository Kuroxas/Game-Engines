#include <iostream>
using namespace std;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "Amount of odd numbers: " << numOfOdd << endl;
    cout << "Total of odd numbers: " << oddTotal << endl;
    cout << "Amount of even numbers: " << numOfEven << endl;
    cout << "Total of even numbers: " << evenTotal << endl;
}

bool isEvenOrOdd(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int userNums[10];
    int i;
    int numOfOdd = 0;
    int oddTotal = 0;
    int numOfEven = 0;
    int evenTotal = 0;
    bool checkNum = false;

    cout << "Please enter 10 integers" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> userNums[i];
    }
    for (i = 0; i < 10; i++)
    {
        checkNum = isEvenOrOdd(userNums[i]);
        if (checkNum == true)
        {
            numOfEven += 1;
            evenTotal += userNums[i];
        }
        else
        {
            numOfOdd += 1;
            oddTotal += userNums[i];
        }
    }
    outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}
