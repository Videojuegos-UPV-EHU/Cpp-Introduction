// 06.Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../Functions/AuxFunctions.h"

int main()
{
	int numbers[3];
	char message[256];

	for (int i = 0; i < 3; i++)
	{
		numbers[i] = GetIntegerFromConsole();
	}

	message[0] = 'h';
	message[1] = 'e';
	message[2] = 'l';
	message[3] = 'l';
	message[4] = 'o';
	message[5] = 0;
	PrintMessage(message);

    return 0;
}

