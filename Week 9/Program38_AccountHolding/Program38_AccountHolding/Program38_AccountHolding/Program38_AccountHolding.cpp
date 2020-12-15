#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

struct bankAccount
{
    string name;
    int accountNumber;
    double balance;
};

int main()
{
    bankAccount account1;
    bankAccount account2;
    bool loop1 = true;
    bool loop2 = true;
    int userChoice;
    char userDetails;
    ofstream out_stream;
    ifstream in_stream;

    while (loop1)
    {
        cout << "Please choose one of the following options: " << endl;
        cout << "1: Enter new details" << endl;
        cout << "2: Display the contents of the file" << endl;
        cout << "3: Display accounts that have a balance over 10,000" << endl;
        cout << "4: Exit the program" << endl;
        cin >> userChoice;

        if (userChoice == 1)
        {
            out_stream.open("UserAccounts.txt");
            while (loop2)
            {
                if (out_stream.is_open())
                {
                    cout << "Please enter the following details: " << endl;
                    cout << "First name: " << endl;
                    cin >> account1.name;
                    cout << "Account Number: " << endl;
                    cin >> account1.accountNumber;
                    cout << "Balance: " << endl;
                    cin >> account1.balance;
                    out_stream << account1.name << endl;
                    out_stream << account1.accountNumber << endl;
                    out_stream << account1.balance << endl;

                    cout << "Do you wish to enter more details? (y for yes, n for no)" << endl;
                    cin >> userDetails;
                    userDetails = tolower(userDetails);
                    if (userDetails != 'y')
                        loop2 = false;
                }
            }
            out_stream.close();
        }
        else if (userChoice == 2)
        {
            loop2 = true;
            in_stream.open("UserAccounts.txt");
            if (in_stream.is_open())
            {
                while (in_stream >> account2.name)
                {
                    in_stream >> account2.accountNumber;
                    in_stream >> account2.balance;
                    cout << account2.name << endl;
                    cout << account2.accountNumber << endl;
                    cout << account2.balance << endl;

                }
            }
            in_stream.close();
        }
        else if (userChoice == 3)
        {
            loop2 = true;
            int count = 0;
            in_stream.open("UserAccounts.txt");
            if (in_stream.is_open())
            {
                while (in_stream >> account2.name)
                {
                    in_stream >> account2.accountNumber;
                    in_stream >> account2.balance;
                    if (account2.balance > 10000)
                    {
                        cout << account2.name << endl;
                        cout << account2.accountNumber << endl;
                        cout << account2.balance << endl;
                        count += 1;
                    }
                }
            }
            if (count == 0)
                cout << "No accounts exist with a balance over 10000" << endl;
            in_stream.close();
        }
        else if (userChoice == 4)
            loop1 = false;
        else
            cout << "That choice is not valid" << endl;

    }
}
