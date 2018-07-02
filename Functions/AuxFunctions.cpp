#include "stdafx.h"
#include "AuxFunctions.h"

#include <iostream>
#include <string>
using namespace std;

void PrintMessage(const char* message)
{
	cout << message;
}

void PrintNumber(int number)
{
	cout << to_string(number);
}

int GetIntegerFromConsole()
{
	int number;

	cin >> number;

	return number;
}