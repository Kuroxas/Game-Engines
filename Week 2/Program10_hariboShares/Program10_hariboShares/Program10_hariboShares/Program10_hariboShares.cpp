#include <iostream>
using namespace std;

int main()
{
    int haribo = 40;
    int students = 14;
    int shares = haribo / students;
    int leftover = haribo - (students * shares);

    cout << "Each student gets " << shares << " packets of Haribo, I get " << leftover << endl;

    return 0;
}