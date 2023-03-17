#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concat two strings <n
 * @s1: * of str one
 * @s2: * of str two
 * @n: number of bytes
 *
 * Return: Char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n < s2_len)
		ptr = malloc(sizeof(char) * (s1_len + n + 1));
	else
		ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));



	if (!ptr)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}


	while (n < s2_len &&  i < (s1_len + n))
	{
		ptr[i++] = s2[j++];
	}

	while (n >= s2_len && i < (s1_len + s2_len))
	{
		ptr[i++] = s2[j++];
	}

	ptr[i] = '\0';
	return (ptr);
}

