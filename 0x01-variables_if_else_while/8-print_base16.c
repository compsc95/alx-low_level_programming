#include <stdio.h>

/**
 * main - displays all number of base 16
 *
 * Return: Return a value of base 16 or nothing
 */

int main(void)
{
	int c;
	char l;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
