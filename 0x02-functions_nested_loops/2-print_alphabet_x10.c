#include "main.h"

/**
 * print_alphabet_x10 - prints the letters of the alphabet
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	char alph;
	int i = 1;

	while (i <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		i++;
		_putchar('\n');
	}
}
