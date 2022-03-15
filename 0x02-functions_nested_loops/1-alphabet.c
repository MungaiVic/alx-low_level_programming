#include "_putchar.c"
#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 *
 * Return: Always 0 (Successful)
*/

int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
