#include <stdio.h>
#include <cstdlib>
#include <ctime>

void Static()
{
	const int size = 16;
	int min, numbers = 0;
	int cArray[size];
	srand(time(NULL));

	printf("Massif C:\n");
	for (int i = 0; i < size; i++)
	{
		cArray[i] = rand() % 41 - 20;
		printf("%d. %d \n", numbers, cArray[i]);
		numbers++;
	}
	min = cArray[0];

	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (min > cArray[i])
		{
			min = cArray[i];
			index = i;
		}
	}
	printf("Min element = %d\n", min);
	printf("His index = %d", index);
}

void Dynamic()
{
	int numbers = 0;
	int size = 0;
	printf("enter size of massif C\n");
	int _ = scanf("%d", &size);

	int *pC;
	pC = (int *)malloc(size * sizeof(int));

	srand(time(NULL));

	printf("Massif C:\n");
	for (int i = 0; i < size; i++)
	{
		pC[i] = rand() % 41 - 20;
		printf("%d. %d \n", numbers, pC[i]);
		numbers++;
	}

	int index = 0;
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		if (min > pC[i])
		{
			min = pC[i];
			index = i;
		}
	}

	printf("Min element = %d\n", min);
	printf("His index = %d", index);
	free(pC);
}

void lab3()
{
	int choise;
	printf("Dynamic massif - 1\n Static - 2\n");
	int _ = scanf("%d", &choise);
	switch (choise)
	{
	case 1:
		Dynamic();
		break;
	case 2:
		Static();
		break;
	default:
		printf("Error");
		break;
	}
}





/*максимальное значение(вставить в Dynamic 53 строка)
	min = pC[0];
	

	int* pTmp = pC;
	index = 0;
	int maxIndex = 0;
	min = *pC;
	while (pTmp++ && ++index < size)
	{
		if (*pTmp > min)
		{
			min = *pTmp;
			maxIndex = index;
		}
	}
*/

/*void test()
{
	int iA[3];
	iA[0] = 15;
}
	
void lab3()
{
	test();

	//read from keybd
	int size = 5;

	int iArray[3];

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", iArray[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		iArray[i] = rand();
	}

	printf("sdgfsdfg\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", iArray[i]);
	}

	printf("dynamic !!!!\n");
	//dynamic
	//unsigned int* pArray = (unsigned int*)malloc(size * sizeof(int));
	unsigned int* pArray = new unsigned int[size];
	unsigned int* pArray1 = new unsigned int[size];

	if (pArray == NULL)
		printf("not memmory");

	for (int i = 0; i < size; i++)
	{
		printf("%d\n", pArray[i]);
	}

	for (int i = 0; i < size; i++)
	{
		unsigned int x = rand();
		pArray[i] = x;
	}

	memcpy(pArray1, pArray, size * sizeof(int));

	printf("sdgfsdfg\n");

	for (int i = 0; i < size; i++)
	{
		printf("%d\n", pArray[i]);
	}

	//free(pArray);
	delete[] pArray;
}*/