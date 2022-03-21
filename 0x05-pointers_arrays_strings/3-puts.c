#include "main.h"
#include <stdio.h>

/**
  * _puts - Prints a string to stdout
  * @str: string to be printed
  * Return: void
  */

void _puts(char *str)
{
	while(*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
