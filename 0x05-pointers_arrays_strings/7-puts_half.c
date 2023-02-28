#include "main.h"

/**
 *  puts_half - prints half a string
 * @str: useless str
 *
 *  Return: a string
 */

void puts_half(char *str)
{
	int c, i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{

	}

	if (i % 2 == 0)
	{
		for (c = i / 2; *(str + c) != 0; c++)
		{
			_putchar (*(str + c));
		}
	}
	if (i % 2 == 1)
	{
		for (c = (i / 2) + 1; *(str + c) != 0; c++)
		{
			_putchar (*(str + c));
		}
	}
	_putchar('\n');
}
