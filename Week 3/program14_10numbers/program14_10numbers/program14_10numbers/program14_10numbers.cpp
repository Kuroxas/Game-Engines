#include <iostream>
using namespace std;

int main()
{
    bool zeroEntered = false;
    int num1;
    int num2;
    int num3;
    float mean1;
    float mean2;
    int sum1;
    int sum2;

    cout << "Enter a 0 at any point to exit the program" << endl;

    while (!zeroEntered)
    {
        cout << "Input a number" << endl;
        cin >> num1;

        if (num1 == 0)
        {
            zeroEntered = true;
            break;
        }

        cout << "Input another number" << endl;
        cin >> num2;

        if (num2 == 0)
        {
            zeroEntered = true;
            break;
        }

        sum1 = (num1 + num2);
        mean1 = (float(sum1) / 2);

        cout << "The sum of the two numbers is " << sum1 << ". The mean of the two numbers is " << mean1 << endl;

        cout << "Input a third number" << endl;
        cin >> num3;

        if (num3 == 0)
        {
            zeroEntered = true;
            break;
        }

        sum2 = (sum1 + num3);
        mean2 = (float(sum2) / 3);

        cout << "The new sum is " << sum2 << ". The new mean is " << mean2 << endl;
    }

}