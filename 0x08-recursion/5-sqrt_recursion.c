#include "main.h"
int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - sqr root
 * sqrt_recursion - finds the squares
 * @n: number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}


/**
* sqrt_recursion - finds the squares
* @n: the number
* @i: checker
*
* Return: int
*/
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}

