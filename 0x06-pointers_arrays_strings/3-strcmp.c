#include "main.h"

/**
 * _strcmp - coompares strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: char pointer
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0, i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{
			break;
		}
	flag = s1[i] - s2[i];
		return (flag);
}
