#include "main.h"

/**
 * _strcpy - copies the string pointer
 * @dest: destination char value
 * @src: source char value
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != 0; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}

