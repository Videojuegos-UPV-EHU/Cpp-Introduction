// PrintNumbersInRange2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "Give me the minimum value to be printed: ";
	cin >> a;

	cout << "Give me the maximum value to be printed: ";
	cin >> b;

	if (a > b)
	{
		swap(a, b);
	}

	for (int i = a; i < b; i++)
	{
		if (i % 2 == 0)
			cout << i << "\n";
	}

	return 0;
}

