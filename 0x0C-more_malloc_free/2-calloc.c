#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fill memory
 * @s: memory area
 * @c: useless char
 * @n: how many
 *
 * Return: * to memory
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}


/**
 * *_calloc - allocates memory for array
 * @nmemb : count of elments in arr
 * @size: size of each element
 *
 * Return: * for memory allocation
 */

void *_calloc(unsigned int  nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);

}
