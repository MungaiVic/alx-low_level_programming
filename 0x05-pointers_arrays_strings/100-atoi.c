#include "main.h"
#include <stdio.h>

/**
  * _atoi - converts a string to an integer
  * @s: pointer to string to be converted
  * Return: converted string
  */

int _atoi(char *s)
{
	int i;
	int result = 0;
	int sign = -1;
	int brkpoint = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10;
			result -= (s[i] - '0');
			brkpoint = 1;
		}
		else if (brkpoint == 1)
			break;
	}
	result = sign * result;
	return (res);
}
