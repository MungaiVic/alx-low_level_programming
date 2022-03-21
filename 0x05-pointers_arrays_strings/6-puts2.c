#include "main.h"
#include <stdio.h>

/**
  * puts2 - prints every other charater of a string
  * @str: pointer to string
  * Return: void
  */

void puts2(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
		str++;
	}
}
