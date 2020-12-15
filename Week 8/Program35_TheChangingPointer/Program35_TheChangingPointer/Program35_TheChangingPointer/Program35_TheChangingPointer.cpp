#include <iostream>
#include <string>
using namespace std;

void inputDetails(int* n1, int* n2)
{
    cin >> *n1;
    cin >> *n2;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << endl;
    cout << "num1 value: " << integer1 << endl;
    cout << "num1 address in memory: " << &integer1 << endl;
    cout << "num2 value: " << integer2 << endl;
    cout << "num2 address in memory: " << &integer2 << endl;
    cout << "pNum held address: " << pointer << endl;
    cout << "pNum dereferenced value: " << *pointer << endl;
    cout << "pNum address in memory: " << &pointer << endl;
}

int main()
{
    int num1;
    int num2;
    int* pNum;
    cout << "Please enter two numbers, one after the other" << endl;
    inputDetails(&num1, &num2);
    pNum = &num1;
    outputDetails(num1, num2, pNum);
}