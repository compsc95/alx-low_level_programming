#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the int value that will be parsed
 * Return: Int last digit
 */

int print_last_digit(int r)
{
	int l;

	if (r < 0)
	{
		r = -r;
	}
	l = r % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
