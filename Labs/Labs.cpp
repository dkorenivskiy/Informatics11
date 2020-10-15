#include <stdio.h>

#include "lab1.h"
#include "helper.h"

int main()
{
	int a = 1;

	printf("Laboratory tasks:\n");
	printf("1. Laboratory task #1 \n");
	printf("0 - exit\n");

	while (a != 0)
	{
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
			default:
				if (a < 9 && a > 0)
				{
					printf("I haven't done it yet\n");
				}
				break;
			}
		}		
	}
}