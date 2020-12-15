#include <iostream>
using namespace std;

void plus25(int& rNum)
{
    rNum += 25;
}

void minus25(int& rNum)
{
    rNum -= 25;
}

int main()
{
    int userNum;
    cout << "Please enter a number." << endl;
    cin >> userNum;
    cout << userNum << endl;
    plus25(userNum);
    cout << userNum << endl;
    cout << "Please enter another number." << endl;
    cin >> userNum;
    cout << userNum << endl;
    minus25(userNum);
    cout << userNum << endl;
}
