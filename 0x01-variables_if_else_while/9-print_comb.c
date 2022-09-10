#include <stdio.h>
/*
 * 9-print_comb.c
 *
 * Description:
 * This program prints
 * all the single digit decimals
 * with commas in-between
 *
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	int i;

	num = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(num + i);
		if (!(i == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
