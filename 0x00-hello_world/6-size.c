#include <stdio.h>
/**
  * main - Prints the size of various types where it is compiled and run on.
  *
  * Return: 0 (Successful)
  */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %lu byte(s)\n", sizeof(long long int));
	printf("The size of a float is: %lu byte(s)\n", sizeof(float));
	return (0);
}
