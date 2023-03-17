#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory to an int
 * @b: useless int
 *
 * Return: 98 for an error
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
