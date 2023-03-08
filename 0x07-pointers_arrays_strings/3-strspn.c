#include "main.h"
#include <string.h>

/**
 * _strspn - return number of bytes
 * @s: string
 * @accept: string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
