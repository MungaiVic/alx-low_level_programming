#include "_putchar.c"
#include "main.h"

/**
 * main - prints out the alphabet
 *
 * Return: Always 0 (Successful)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
