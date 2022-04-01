#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the program name
  * @argc: number of args passes
  * @argv: pointer to array
  * Return: EXIT_SUCCESS
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (EXIT_SUCCESS);
}
