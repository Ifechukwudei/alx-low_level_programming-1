#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i, len = strlen(s);


	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
