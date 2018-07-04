// 06.Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../05.Functions/AuxFunctions.h"

#define NUM_NUMBERS 4
#define STRING_SIZE 256

int main()
{
	int numbers[NUM_NUMBERS];
	char message[STRING_SIZE];

	for (int i = 0; i < NUM_NUMBERS; i++)
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

