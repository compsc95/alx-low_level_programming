#include "main.h"
#include <stdio.h>

/**
 * print_array - displays elements of an array
 * @a: a hey array
 * @n: size of array
 *
 * Returns: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != a[0])
		{
			printf(", %d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
