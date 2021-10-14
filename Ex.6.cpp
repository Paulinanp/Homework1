#include <iostream>
using namespace std;

int main()
{
    int sideA, sideB, sideC;

    cin >> sideA >> sideB >> sideC;

    if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}

