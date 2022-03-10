#include <stdio.h>
/**
  * main - Prints the size of various types where it is compiled and run on.
  *
  * Return: 0 (Successful)
  */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %lu byte(s)\n", sizeof(i));
	printf("Size of an int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int is: %lu byte(s)\n", sizeof(l));
	printf("The size of a float is: %lu byte(s)\n", sizeof(m));
	return (0);
}
