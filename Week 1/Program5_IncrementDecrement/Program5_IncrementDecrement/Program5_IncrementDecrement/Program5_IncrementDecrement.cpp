#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    cout << "num = " << num << endl;
    cout << "Increment Operator before num = " << ++num << endl;
    cout << "num after = " << num << endl;

    // Reset num to 1

    num = 1;

    cout << "num = " << num << endl;
    cout << "Increment Operator after num = " << num++ << endl;
    cout << "num after = " << num << endl;

    // Reset num to 1
    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator after num = " << --num << endl;
    cout << "num after = " << num << endl;

    // Reset num to 1
    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator after num = " << num-- << endl;
    cout << "num after = " << num << endl;

    return 0;
}
