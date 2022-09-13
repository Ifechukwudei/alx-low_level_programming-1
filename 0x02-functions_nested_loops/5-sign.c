#include "main.h"

/**
  * print_sign - indicates whether int is positive or negative
  * @n: integer value to be tested
  * Return: 1 and prints + if n is greater than zero
  *     Returns 0 and prints '0' if n is zero
  *     Returns -1 and prints '-' if ne is less than zero
  *
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
