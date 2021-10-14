#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sideA, sideB, sideC;

	cin >> sideA >> sideB >> sideC;

	int perimeter = sideA + sideB + sideC;

	int p = (sideA + sideB + sideC) / 2;

	int area = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));

	cout << "Perimeter: " << perimeter << " Area: " << area;

	return 0;
}
