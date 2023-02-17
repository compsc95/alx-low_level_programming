#include <stdio.h>

/**
 * main - print single digits to base 10
 *
 * Return: return single digit or nothing
 */

int main(void)
{
	int n, i;

	for (i = 10; i <= 19; i++)
	{
		n = i % 10;
		putchar(n % 10 + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
