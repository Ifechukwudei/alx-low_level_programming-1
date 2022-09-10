#include <stdio.h>
/*
 * 6-print_numberz.c
 *
 * Description:
 * This program prints
 * all the base 10 digits in order
 * using putchar()
 * No vars of type char ...
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
