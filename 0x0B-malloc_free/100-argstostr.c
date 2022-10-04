#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @str: string to be tested for length
 * Return: length of string
 **/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * argstostr - concatenate all args to program
 * @ac: number of args to program
 * @av: arguments to main = array of strings
 * Return: one big stri of concatenated args, with newlines built in to str
 */
char *argstostr(int ac, char **av)
{
	char *bigstr;
	int i, j, k = 0, biglen = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
		biglen += _strlen(av[i]) + 1;
	biglen += 1;

	bigstr = malloc(sizeof(char) * biglen);
	if (bigstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			bigstr[k] = av[i][j];
			k++;
		}
		bigstr[k] = '\n';
		k++;
	}
	bigstr[k] = '\0';
	return (bigstr);
}
