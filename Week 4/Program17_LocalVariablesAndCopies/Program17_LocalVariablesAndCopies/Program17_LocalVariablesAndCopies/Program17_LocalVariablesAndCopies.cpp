#include <iostream>
using namespace std;

void addTwo(int num)
{
    //add two to the number passed
    num += 2;
    //output the contents of num within the function
    cout << "FUNCTION: num = " << num << endl;
}

int main()
{
    int myNum = 6;
    cout << "MAIN [before]: myNum = " << myNum << endl;
    addTwo(myNum);
    cout << "MAIN [after]: myNum = " << myNum << endl;
}
