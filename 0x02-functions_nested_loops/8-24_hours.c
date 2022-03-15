#include "main.h"

/**
  * jack_bauer - Prints time from 00:00 to 23:59
  * Return: Always 0 (Successful)
  *
  */

void jack_bauer(void)
{
	int hh = 0;
	int mm;

	while (hh < 24)
	{
		mm = 0;
		while (mm < 60)
		{
			_putchar(hh + '0');
			_putchar(':');
			_putchar(mm + '0');
			_putchar('\n');
			mm++;
		}
	}
}
