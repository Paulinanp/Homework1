#include <iostream>
using namespace std;

int main()
{
    int number, reminder;
    int reversedNum = 0;
    
    cin >> number;

    while (number != 0)
    {
        reminder = number % 10;
        reversedNum = reversedNum * 10 + reminder;
        number /= 10;
    }

    cout << reversedNum;

    return 0;
}

