#include <stdio.h>

/**
 * main - Prints characters of the alphabet in lowercase
 *
 * Return: Alphabets or nothing
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
