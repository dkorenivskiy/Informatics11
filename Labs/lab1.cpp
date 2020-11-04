#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "lab1.h"
#include "helper.h"

void BytesShows(const char* ShowB, int Byte)
{
	if (Byte > 0)
	{
		printf(ShowB, Byte);
		printf(" ");
	}
}

void PrintB(int Byte, int B)
{
	BytesShows("Bytes = %d", Byte);
	BytesShows("Bits = %d", B);
	printf("\n");
}

void CountBits(int& Case2Bit, int& Case2Byte, int& Case2B)
{
	if (Case2Bit > 8)
	{
		Case2Byte = Case2Bit / 8;
		Case2B = Case2Bit % 8;
	}
	else
	{
		Case2Byte = 0;
		Case2B = Case2Bit;
	}
}

void CountKilos(int& CountBit, int& CountKilo, int& CountByte, int& CountB)
{
	if (CountBit > 1024)
	{
		CountKilo = CountBit / 1024;
		CountByte = CountBit % 1024;
		CountB = CountByte / 8;
	}
	else
	{
		CountKilo = 0;
		CountBits(CountBit, CountByte, CountB);
	}
}

void lab1()
{
	int MainB, MainByte, MainBit, MainKilo, MainChoise, FinProg = 0;

	do
	{
		printf("*************************************\n");
		printf("LABORATORY TASK NUMBER 1\n");
		bool resQuant = readIntValue("Enter the quantity of bits ", MainBit);
		
		if (resQuant)
		{
			bool resChoise = readIntValue("If you want to transfer it into kilobytes, press 1\nIf you want to transfer it into bytes, press 2\n", MainChoise);
			// mainChoise contains bytes or kilo user select
			if (resChoise)
			{
				switch (MainChoise)
				{
				case 1:
					CountKilos(MainBit, MainKilo, MainByte, MainB);
					printf("KB = %d", MainKilo);
					printf(" ");
					PrintB(MainByte, MainB);
					break;
				case 2:
					CountBits(MainBit, MainByte, MainB);
					PrintB(MainByte, MainB);
					break;
				default:
					printf("Error");
					break;
				}
				printf("\n*************************************\n");
				printf("If you want to finish work with this Laboratory Task press 1.\nIf you want to continue - press 2\n");
				int _ = scanf("%d", &FinProg);
			}
			else
			{
				printf("Error\n");
			}
		} 
		else
		{
			printf("Error\n");
		}
	} while (FinProg == 2);

}