#include "main.h"
#include <stdio.h>

/**
  * rev_string- Prints a string in reverse
  * @s: pointer to string
  * Return: void
  */

void rev_string(char *s)
{
	char *t = s;
	char rev[500];
	short n = 0;

	while (*s != '\0')
	{
		rev[n] = *s;
		s++;
		n++;
	}
	n = 0;

	while (s > t)
	{
		s--;
		*s = rev[n];
		n++;
	}
}
