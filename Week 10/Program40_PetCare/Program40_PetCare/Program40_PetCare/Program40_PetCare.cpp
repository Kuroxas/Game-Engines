#include <iostream>
#include "pet.h"
#include "Program40_PetCare.h"
using namespace std;

int main()
{
    pet* petPtr;
    int userChoice;
    cout << "What pet do you want? Choices are:" << endl;
    cout << "1: Dog" << endl;
    cout << "2: Cat" << endl;
    cout << "3: Hamster" << endl;
    cin >> userChoice;
    switch(userChoice)
    {
    case 1:
        petPtr = new Dog();
    }
}