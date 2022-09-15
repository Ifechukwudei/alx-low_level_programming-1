#include "main.h"
#include <limits.h>

/**
 * num_digits - returns the number of digits in a decimal number
 *@n: - number that is analyzed for number of digits it contains
 * Return: num = number of digits
 **/

int num_digits(int n)
{
	int num = 0;

	if (n == 0)
		num = 1;
	else
		while (n != 0)
		{
			num++;
			n /= 10;
		}
	return (num);
}

/**
 * posPower - Positive Power! calculates abs(x to the y), yo!
 * @x: the x in x to the y
 * @y: the y in x to the y
 * Return: - num (calculated value of abs(x to the y))
 **/
int posPower(int x, int y)
{
	int val, i;

	if (y > 0)
	{
		if (x < 0)
			x = -x;
		val = 1;
		for (i = 0; i < y; i++)
			val = val * x;
		return (val);
	}
	else
		return (1);
}
/**
 * print_number - print a number that is passed in
 * INT_MIN  INT_MAX
 * @n: - number that is passed in to print
 * return:  void
 **/

void print_number(int n)
{
	int i, x, digits;
	int oneD;
	char minus = '+';
	int revNumber = 0;

	if (n < 0)
		minus = '-';
	else
		n = -n;
	digits = num_digits(n);
	for (i = digits - 1; i >= 0; i--)
	{
		oneD = n % 10;
		n = n / 10;
		revNumber = posPower(10, i) * oneD + revNumber;
	}
	if (revNumber == 0)
		_putchar('0');
	else if (minus == '-')
		_putchar('-');
	x = 0;
	while (revNumber != 0)
	{
		x = revNumber % 10;
		_putchar('0' - x);
		revNumber /= 10;
	}
}
