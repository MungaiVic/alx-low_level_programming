#include "main.h"
#include <stdio.h>

/**
  * print_rev- Prints a string in reverse
  * @s: pointer to string
  * Return: void
  */

void print_rev(char *s)
{
	int counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}

	while (counter > 0)
	{
		s--;
		printf("%c", *s);
		counter--;
	}
	printf("\n");
}
