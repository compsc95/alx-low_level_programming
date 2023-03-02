#include "main.h"

/**
 * *_strcat - returns a concanated pointer
 * @dest: destination
 * @src: source
 *
 *Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != 0; dest_len++)
	{

	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
