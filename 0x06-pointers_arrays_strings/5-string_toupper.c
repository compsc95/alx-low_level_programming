#include "main.h"

/**
 * string_toupper - convers string to uppercase
 * @s: useless string
 *
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	char *p = s;

	for (; *p; ++p)
	{
		if ('a' <= *p && *p <= 'z')
			*p = *p & ~' ';
	}
	return (s);
}
