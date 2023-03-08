#include "main.h"
#include <string.h>

/**
 * _strstr - compares a substring
 * @haystack: char
 * @needle: char
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	static char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
		{
			return (ptr);
		}
	ptr++;
	}
	return (NULL);
}
