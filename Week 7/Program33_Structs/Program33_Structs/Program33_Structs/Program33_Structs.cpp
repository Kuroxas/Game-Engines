#include <iostream>
using namespace std;

struct personDetails
{
    string name;
    int age;
    string phoneNum;

    void PrintDetails()
    {
        cout << "User's name is: " << name << endl;
        cout << "User's age is: " << age << endl;
        cout << "User's phone number is: " << phoneNum << endl;
    }
};

int main()
{
    personDetails user;
    cout << "Please enter your name: " << endl;
    cin >> user.name;
    cout << "Please enter your age: " << endl; 
    cin >> user.age;
    cout << "Please enter your phone number: " << endl;
    cin >> user.phoneNum;
    user.PrintDetails();
}
