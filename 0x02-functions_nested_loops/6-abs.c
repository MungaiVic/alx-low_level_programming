#include "main.h"

/**
  * _abs - prints out the absolute value of a digit
  * @num: parameter
  * Return: Always 0 (Successful)
  */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else if (num > 0)
	{
		return (num);
	}
	else
	{
		return (0);
	}
}
