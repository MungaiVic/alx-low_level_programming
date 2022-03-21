#include "main.h"

/**
  * _strlen - Returns length of string
  * @s: pointer to string to be evaluated
  * Return: length of string
  */


int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
}
