#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space
 * @str: string to be copied
 *
 * Return: On success, a pointer to the duplicated string;
 * NULL if failed or insufficient memory was allocated
 */

char *_strdup(char *str)
{
	int size = 0;
	char *strCopy;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	strCopy = malloc(size * sizeof(*str) + 1);

	if (strCopy == 0)
		return (NULL);

	strcpy(strCopy, str);
	return (strCopy);
}
