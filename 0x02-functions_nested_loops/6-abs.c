#include "main.h"

/**
  * _abs - returns absolute value of n
  * @n: integer value to be tested
  * Return: absolute value of n
  *
  */
int _abs(int n)
{
		if (n >= 0)
			return (n);
		else
			return (n - 2 * n);
}
