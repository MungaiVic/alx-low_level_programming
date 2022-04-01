#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the no. of args pass to it
  * @argc: number of args passes
  * @argv: pointer to array
  * Return: EXIT_SUCCESS
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}
