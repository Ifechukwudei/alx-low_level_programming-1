#include "main.h"

/**
 * print_last_digit - returns n,  Prints last digit of n
 * @n: full length int
 * Return: Always 0.
 */
int print_last_digit(int n)
{
		n = n % 10;
		if (n < 0)
			n = -n;
		_putchar('0' + (n));
		return (n);
}
