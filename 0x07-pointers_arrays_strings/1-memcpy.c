#include "main.h"

/**
 * _memcpy - copys n bytes from src to dest
 * @dest: desination
 * @src: Source
 * @n: unsigned int
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;  i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
