#include "main.h"
#include <stdio.h>

/**
 * print_times_table - outputs times tables 9x9
 * @n: column and row size (always the same)
 * returns - void
 */

void print_times_table(int n)
{
		int row, col, p;

		if (n <= 15 && n > 0)
		{
			for (row = 0; row <= n; ++row)
			{
				_putchar('0');
				_putchar(',');
				for (col = 1; col <= n; ++col)
				{
					p = col * row;
					_putchar(' ');
					if (p / 100  >= 1)
					{
						_putchar('0' + p / 100);
						_putchar('0' + p / 10 % 10);
						_putchar('0' + p % 10);
					}
					else if (p / 10 >= 1)
					{
						_putchar(' ');
						_putchar('0' + p / 10);
						_putchar('0' + p % 10);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					if (col < n)
						_putchar(',');
					else
						_putchar('\n');
				}
			}
		}
}

