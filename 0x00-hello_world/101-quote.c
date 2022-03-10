#include <stdio.h>
#include <unistd.h>
/**
  * main - Prints some text then new line to the standard error
  * Return: 1 (FAILURE)
  */

int main(void)
{
	/* write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);*/
	fprintf(stderr, "and that piece of art is useful\"");
	fprintf(stderr, " - Dora Korpar, 2015-10-19\n")
	return (1);
}
