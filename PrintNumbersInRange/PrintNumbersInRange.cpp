// PrintNumbersInRange.cpp : Defines the entry point for the console application.
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

	for (int i = a; i < b; i++)
	{
		cout << i << "\n";
	}

	//int i = a;
	//while (i < b)
	//{
	//	cout << i << "\n";

	//	i++;
	//}
    return 0;
}

