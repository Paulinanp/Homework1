﻿#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num;

	cin >> num1 >> num2;

	num = num1 + num2;
	num2 = num - num2;
	num1 = num - num2;

	cout << "num1: " << num1 << ", num2: " << num2;

	return 0;
}
