#include "main.h"

/**
  * _islower - Prints if character is lower or uppercase
  * @c: the character being checked
  * Return: 1 if uppercase, 0 if lower
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
