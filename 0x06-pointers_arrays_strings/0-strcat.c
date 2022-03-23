#include "main.h"

/**
  * *_strcat - appends the src string to the dest string
  * @src: string to append to dest
  * @dest: string to be appended to
  * Return: pointer to resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
