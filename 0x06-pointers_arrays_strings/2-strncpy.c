#include "main.h"

/**
 * _strncpy - copies a string pointed to by the scr to the
 *	buffer pointed by the dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bites to be copied
 *
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
