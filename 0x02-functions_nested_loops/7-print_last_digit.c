#include "main.h"
#include "_putchar.c"
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

	i = lnum % 10;

	if (i < 0)
		i = -i;

	_putchar(i);

	return (i);
}
