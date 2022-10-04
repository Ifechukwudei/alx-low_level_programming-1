#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of the array
 * @arr: char
 *
 * Return: pointer to the array or null if fails
 */

char *create_array(unsigned int size, char arr)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_alloc[i] = arr;

	return (array_alloc);
}
