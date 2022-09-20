#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copies the string,
 * including the terminating null byte
 * @dest: buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: a pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
