#include "main.h"

/**
 * times_table - creates a times tables
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0;  a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');

	}
}

