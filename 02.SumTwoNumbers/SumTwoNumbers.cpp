// SumTwoNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Demo program: a+b\n";

	int a, b;

	cout << "Give me a: ";
	cin >> a;

	cout << "Give me b: ";
	cin >> b;

	cout << "a+b= " << to_string(a + b);

	return 0;
}