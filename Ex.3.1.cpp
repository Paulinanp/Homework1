#include <iostream>
using namespace std;

int main()
{
    int num1, num2, multiplication, lastNum;
    cin >> num1 >> num2;

    multiplication = num1 * num2;
    lastNum = multiplication % 10;
    bool isDigit = multiplication % 2 == 0;

    cout << multiplication << ", " << lastNum << ", " << isDigit;

    return 0;
}

