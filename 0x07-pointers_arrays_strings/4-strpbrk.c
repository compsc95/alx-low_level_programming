#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string
 * @accept: char
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
