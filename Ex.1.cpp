#include <iostream>
using namespace std;

int main()
{
	int number, firstNum, secondNum, thirdNum, fourthNum, sum;
	cin >> number;

	firstNum = number / 1000;
	cout << "first digit: " << firstNum << endl;

	secondNum = (number / 100) % 10;
	cout << "second digit: " << secondNum << endl;

	thirdNum = (number / 10) % 10;
	cout << "third digit: " << thirdNum << endl;

	fourthNum = number % 10;
	cout << "fourth digit: " << fourthNum << endl;

	sum = firstNum + secondNum + thirdNum + fourthNum;
	cout << "sum: " << sum;

	return 0;
}

