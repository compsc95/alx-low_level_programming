#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: integer that will be parsed
 *
 * Return: 1 or 0 or -1
 */

int print_sign(int d)
{
	if (d > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (d == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
