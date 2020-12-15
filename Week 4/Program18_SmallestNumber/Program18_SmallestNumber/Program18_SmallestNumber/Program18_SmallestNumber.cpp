#include <iostream>
using namespace std;

int smallestNumber(int a, int b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
    {
        cout << "Both numbers are equal" << endl;
        return false; 
    }

}

int main()
{
    int num1;
    int num2;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a number" << endl;
        cin >> num1;
        cout << "Enter another number" << endl;
        cin >> num2;
        int num3 = smallestNumber(num1, num2);
        if (num3 != false)
            cout << "The smallest number is: " << num3 << endl;
    }
}