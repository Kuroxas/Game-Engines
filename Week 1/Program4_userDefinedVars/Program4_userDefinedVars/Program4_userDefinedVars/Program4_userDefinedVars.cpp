#include <iostream>
using namespace std; 

int main()
{
    typedef int cost;
    enum CarMake
    {
        FORD = 1,
        FIAT,
        TESLA,
        VW,
        BMW,
        ASTONMARTIN,
        HONDA,
        NISSAN,
        TOYOTA,
        AUDI,
        JAGUAR,
        DODGE
    };
    cost carCost = 13000;
    CarMake myCar = HONDA;
    
    cout << "The cost of my car is " << carCost << endl;
    cout << "My car id is " << myCar << endl;

    return 0;
}