#include <stdio.h>

/**
  * main - Prints single digit numbers in base 10 then new line
  * Return: 0 (Success)
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
