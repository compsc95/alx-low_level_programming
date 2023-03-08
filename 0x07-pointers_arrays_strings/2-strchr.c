#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a chr in strings
 * @s: useless string
 * @c: useless char
 *
 * Return: pointer or Null
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
		return (s);
		}

	} while (*s++);
	{
		return (NULL);
	}

}
