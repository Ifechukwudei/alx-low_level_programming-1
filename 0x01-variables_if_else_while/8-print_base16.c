#include <stdio.h>
/*
 * 8-print_tebahpla.c
 *
 * Description:
 * This program prints
 * all the single digit hexadecimal
 * numbers
 *
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter, num;
	int i;

	letter = 'a';
	num = '0';

	for (i = 0; i < 10; i++)
		putchar(num + i);
	for (i = 0; i < 6; i++)
		putchar(letter + i);
	putchar('\n');
	return (0);
}
