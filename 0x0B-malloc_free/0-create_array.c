#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates char array
 * @size: size of arr
 * @c: char to initialize array
 *
 * Return: pointer to arr
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == 0)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
