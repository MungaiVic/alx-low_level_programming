#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @lnum: parameter
  * Return: Always 0 (successful)
  */

int print_last_digit(int lnum)
{
	int i = lnum % 10;

	if (i >= 0)
	{
		_putchar(i + '0');
		return (i);
	}
	_putchar(-i + '0');

	return (-i);
}
