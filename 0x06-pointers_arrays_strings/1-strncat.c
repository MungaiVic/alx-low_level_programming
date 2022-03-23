#include "main.h"

/**
  * *_strncat - appends the src string to the dest string
  * @src: string to append to dest
  * @dest: string to be appended to
  * Return: pointer to resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	j = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[j + i] = '\0';
	return (dest);
}
