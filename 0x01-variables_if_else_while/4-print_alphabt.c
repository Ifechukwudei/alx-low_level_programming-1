#include <time.h>
#include <stdio.h>
/*
 * 4-print_alphabt.c
 *
 * Description:
 * This program prints
 * all the lower case characters in
 * the alphabet, using putchar()
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

	for (i = 0; i < 26; i++)
		if (!(letter + i == 'q' || letter + i == 'e'))
			putchar(letter + i);
	putchar('\n');
	return (0);
}
