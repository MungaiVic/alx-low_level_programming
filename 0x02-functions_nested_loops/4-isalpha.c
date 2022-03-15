#include "main.h"

/**
  * _isalpha- Prints if character is lower or uppercase
  * @c: the character being checked
  * Return: 1 if uppercase, 0 if lower
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

