#include <stdio.h>

/**
  * main - Prints out the first 50 fibonacci numbers
  * Return: Always 0 (Successful)
  */

int main(void)
{
	unsigned long int first = 1, sec = 2;
	int i;

	printf("%lu", first);
	for (i = 1; i < 50; i++)
	{
		printf(", %lu", sec);
		sec += first;
		first = sec - first;
	}
	printf("\n");
	return (0);
}
