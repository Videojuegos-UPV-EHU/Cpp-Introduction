// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AuxFunctions.h"

int main()
{
	PrintMessage("Give me a number");
	int number1 = GetIntegerFromConsole();

	PrintMessage("Give me a second number");
	int number2 = GetIntegerFromConsole();

	PrintNumber(number1 + number2);
    return 0;
}

