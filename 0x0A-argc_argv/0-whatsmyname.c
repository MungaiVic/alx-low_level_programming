#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the program name
  * return: EXIT_SUCCESS
  */

int main (int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (EXIT_SUCCESS);
}
