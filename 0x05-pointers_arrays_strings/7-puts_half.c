#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts_half - prints half of a string
  * @str: pointer to string
  * Return: void
  */

void puts_half(char *str)
{
	int i;
	int halflen = (strlen(str))/2;
	int flen = strlen(str);

	for (i = halflen; i < flen; i++)
	{
		printf("%c", str[i]);
	}
}
