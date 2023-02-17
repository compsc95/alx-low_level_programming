#include <stdio.h>

/**
 * main - Prints characters of the alphabet in lowercase
 *
 * Return: Alphabets or nothing
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
