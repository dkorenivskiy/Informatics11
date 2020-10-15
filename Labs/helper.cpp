#pragma once

#include <stdio.h>

#include "helper.h"

bool readIntValue(const char* prompt, int& value)
{
	printf(prompt);
	int res = scanf("%d", &value);

	if (res == 0)
	{
		//TODO: make it safe
		char s[256];
		int _ = scanf("%s", s);
	}

	return res == 1;
}