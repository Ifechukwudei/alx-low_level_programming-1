#include <stdio.h>
/*
 * 101-print_comb3.c
 *
 * Description:
 * This program prints
 * unique combinations of digits into 3
 * digit numbers, in ascending order
 * from 000 to 999
 * No vars of type char use ...
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, offset;

	offset = 48;
	for (i = 0; i < 10; i++)
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if ((j != k && i != j && i != k))
				{
					putchar(i + offset);
					putchar(j + offset);
					putchar(k + offset);
					if (!((i > 6) && (j > 7) && (k > 8)))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	putchar(10);
	return (0);
}
