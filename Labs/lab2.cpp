#include <stdio.h>

#include "lab2.h"
#include "helper.h"

void lab2()
{
	int finProg = 0;

	do
	{
		printf("*************************************\n");
		printf("LABORATORY TASK NUMBER 2\n");
		int b;
		bool resNumeric = readIntValue("Enter the numeric B ", b);
		if (resNumeric)
		{
			printf("Dividers of number %d: \n", b);
			int  numbers = 0;
			for (int i = 1; i <= (b / 2); i++)
			{
				if (b % i == 0)
				{
					numbers++;
					printf("%d. %d \n", numbers, i);
				}
			}
			printf("%d. %d \n", ++numbers, b);
		}
		else 
		{
			printf("Error");
		}
		printf("\n*************************************\n");
		printf("If you want to finish work with this Laboratory Task press 1.\nIf you want to continue - press 2\n");
		int _ = scanf("%d", &finProg);
	} while (finProg == 2);
}