#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints nums
 * @separator: pts to separator
 * @n: count of elems
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	char *str;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else

			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}
