#include <stdio.h>

/**
 * main - printing letters of alphabet except q and e
 *
 * Return: Included alphabets or nothing
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
