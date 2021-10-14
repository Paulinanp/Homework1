#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

	if (year % 2 == 0)
	{
		if (year % 100 != 0)
		{
			cout << year << " is a loop year.";
		}
		else
		{
			cout << year << " is not a loop year.";
		}
	}
	else
	{
		cout << year << " is not a loop year.";
	}
	return 0;
}
