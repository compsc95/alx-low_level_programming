#include <unistd.h>

/**
 * _putchar - prints the char c to the standard display
 * @c: the characted that should be displayed
 *
 * Retrun: 1 on success
 * When an error occurs return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
