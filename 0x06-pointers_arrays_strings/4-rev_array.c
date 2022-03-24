#include "main.h"

/**
  * reverse_array - Reverses an array
  * @a: integer to be reversed
  * @n: number of elements of the array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int arr[100];
	int i;

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}
	
	for ( ; i > 0; i--)
	{
		a[i] = arr[i];
	}
}
