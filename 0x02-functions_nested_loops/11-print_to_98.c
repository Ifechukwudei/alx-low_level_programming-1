#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - returns a list of numbers, ending with 98
 * @n: start value of list of numbers to print
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}

}
