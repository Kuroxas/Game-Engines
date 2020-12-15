#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void checkName(string& userName)
{
    srand(time(NULL));
    int num = rand();
    userName += to_string(num);
}

int main()
{
    string userName;
    cout << "Please enter your desired username: " << endl;
    cin >> userName;
    cout << "Your username is taken. Here are is a suggestions: " << endl;
    checkName(userName);
    cout << userName << endl;
}
