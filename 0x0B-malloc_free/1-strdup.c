#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * *_strdup - returns a pointer to a newly
 *  @str: str to be duplicated.
 *
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{

	int i = 0, j;

	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}

	newStr = malloc(sizeof(char) * (i + 1));
	if (newStr == NULL)
		return (0);

	for (j = 0; j < i; j++)
		newStr[j] = str[j];
	return (newStr);
	free(newStr);
}
