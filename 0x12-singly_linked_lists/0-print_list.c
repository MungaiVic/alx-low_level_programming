#include "main.h"

/**
 * print_list - prints all the elements of a list
 * @h: a linked list structure
 * Return: a size_t variable which is a system specific integer
 */


size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;

	for (counter = 0; temp; counter++)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nill)\n");
		} else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
	}

	return (counter);
}
