#include<stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: void
 */
void main(void)
{
	long int a = 0;
	long int b = 1;
	long int c = 1;
	int counter = 1;

	a = b;
	b = c;
	c = a + b;

	printf ("%ld\n", b);
	printf ("%ld\n", c);
	counter++;

	while (counter < 50)
	{
		counter++;
		a = b;
		b = c;
		c = a + b;
		printf ("%ld\n", c);
	}
}
