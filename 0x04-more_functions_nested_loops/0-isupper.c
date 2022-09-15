#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
