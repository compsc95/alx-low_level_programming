#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: useless str
 *
 * Return: noting
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	for (len = 0; s[len] != 0; len++)
	{

	}
	len -= 1;

	for (; len >= 0 ; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
