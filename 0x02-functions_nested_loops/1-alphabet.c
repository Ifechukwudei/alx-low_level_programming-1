#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
 * this is just a function
 *
 * Return: Always return void
 */
void print_alphabet(void)
{
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar('a' + i);
		}
		_putchar('\n');
}
