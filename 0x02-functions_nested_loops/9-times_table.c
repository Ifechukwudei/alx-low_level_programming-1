#include "main.h"
#include <stdio.h>

/**
 * times_table - outputs times tables 9x9
 *
 * returns - void
 */

void times_table(void)
{
		int row, col, p;

		for (row = 0; row <= 9; ++row)
		{
			_putchar('0');
			_putchar(',');
			for (col = 1; col <= 9; ++col)
			{
				p = col * row;
				if (p / 10  == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
				if (col < 9)
					_putchar(',');
				else
					_putchar('\n');

			}
		}
}
