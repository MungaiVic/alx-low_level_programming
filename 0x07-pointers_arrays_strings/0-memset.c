#include "main.h"

/**
 * _memset - Function
 * @s: pointer to char params
 * @b: data to be changed
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

