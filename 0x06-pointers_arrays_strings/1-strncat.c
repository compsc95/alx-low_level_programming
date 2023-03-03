#include "main.h"

/**
 * *_strncat - returns a concanated pointer
 * @dest: destination
 * @src: source
 * @n: useless int
 *
 *Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != 0; dest_len++)
	{

	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
