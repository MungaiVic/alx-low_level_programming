#include <stdio.h>

/**
  * main - Prints single digit nums then new line
  * Return: 0 (Success)
  */

int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
