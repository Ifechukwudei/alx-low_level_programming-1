#include "main.h"

/**
 * print_square - print diagonal line using '\' characters
 * @n: int value how long (vertically) to make diagonal line
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		goto END;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			_putchar('#');
		_putchar('\n');
	}
END:;
}
