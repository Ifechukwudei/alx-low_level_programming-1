#include <stdio.h>
/*
 * 7-print_tebahpla.c
 *
 * Description:
 * This program prints
 * all the lower case characters in
 * reverse, using putchar()
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

	letter = 'a';

	for (i = 25; i >= 0; i--)
		putchar(letter + i);
	putchar('\n');
	return (0);
}
