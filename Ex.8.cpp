#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	double maxNumber, minNumber;

	if (num1 > num2 && num1 > num3)
	{
		maxNumber = num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		maxNumber = num2;
	}
	else if (num3 > num1 && num3 > num2)
	{
		maxNumber = num3;
	}

	if (num1 < num2 && num1 < num3)
	{
		minNumber = num1;
	}
	else if (num2 < num1 && num2 < num3)
	{
		minNumber = num2;
	}
	else if (num3 < num1 && num3 < num2)
	{
		minNumber = num3;
	}

	cout << maxNumber << " " << minNumber;

	return 0;
}
