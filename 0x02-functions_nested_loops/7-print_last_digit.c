#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @lnum: parameter
  * Return: Always 0 (successful)
  */

int print_last_digit(int lnum)
{
	int i;

	if (lnum < 0)
		lnum = -lnum;

	i = n % 10;

	if (a < 0)
		i = -i;

	_putchar(i);

	return (i);
}
