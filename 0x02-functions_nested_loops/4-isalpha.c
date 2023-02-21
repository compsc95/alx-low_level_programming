#include "main.h"

/**
 * _isalpha - checks for lowercases
 *@c: the character that will be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
