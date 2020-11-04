#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "helper.h"
#include "lab1.h"
#include "lab2.h"
#include "lab3.h"

int main()
{	
	int a = 1;

	while (a != 0)
	{
		printf("Laboratory tasks:\n");
		printf("1 - Laboratory task #1 \n2 - Laboratory task #2\n3 - Laboratory tast #3\n");
		printf("0 - exit\n");

		bool res = readIntValue("Choose the number of laboratory task ", a);

		if (!res)
			printf("Error\n");
		else
		{
			switch (a)
			{
			case 1:
				lab1();
				break;
			case 2:
				lab2();
				break;
			case 3:
				lab3();
				break;
			default:
				if (a < 10 && a > 0)
				{
					printf("I haven't done it yet\n");
				}
				break;
			}
		}		
	}
}