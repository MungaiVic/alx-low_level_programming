#include "main.h"
#include "_putchar.c"

/**
  * print_sign - Prints output relationship to 0
  * @n: parameter to be checked
  * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
  */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
