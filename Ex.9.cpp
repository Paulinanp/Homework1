#include <iostream>
using namespace std;

int main()
{
    double numX;
    double a, b;

    cin >> numX >> a >> b;

    if (numX >= a && numX <= b)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
