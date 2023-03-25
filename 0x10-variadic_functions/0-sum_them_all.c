#include <stdarg.h>

/**
 * sum_them_all - sums all args
 * @n: number of args
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int p, sum = 0;

	va_start(ap, n);

	for (p = 0; p < n; p++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
