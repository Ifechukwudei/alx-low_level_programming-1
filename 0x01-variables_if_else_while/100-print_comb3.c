#include <stdio.h>
/*
 * 100-print_comb3.c
 *
 * Description:
 * This program prints
 * "some of" the base 10 numbers in order
 * from 0 to 99
 * No vars of type char ...
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, offset;

	offset = 48;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (!(i == j))
			{
				putchar(i + offset);
				putchar(j + offset);
				if (!((i == 8) && (j == 9)))
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
