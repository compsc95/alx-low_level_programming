#include "main.h"
#include <stdlib.h>

/**
 * *array_range - array with range min to max
 * @min: minimun
 * @max: maximum
 *
 * Return: * with array
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;


	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);

}
