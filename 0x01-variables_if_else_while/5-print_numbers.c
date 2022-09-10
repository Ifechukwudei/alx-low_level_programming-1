#include <time.h>
#include <stdio.h>
/*
 * 5-print_numbers.c
 *
 * Description:
 * This program prints
 * all the base 10 digits in order
 * using putchar()
 *
 */

/**
  * main - this is the main function that runs everything
  * @void: no arguments passed in
  *
  * Return: 0
  */
int main(void)
{
	char letter;
	int i;

	letter = '0';

	for (i = 0; i < 10; i++)
		putchar(letter + i);
	putchar('\n');
	return (0);
}
