#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: string to be concatenated
 * @n: number of bytes to be copied
 *
 * Return: the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		destlen++;
		counter++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
