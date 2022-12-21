#include "main.h"

/**
 * strcat - concatenates the pointed string
 *
 * @dest: a pointer to a string to be concatenated upon.
 * @src: The source string to be appended
 *
 * Return: a pointer
 */

char *strcat(char *dest, const char *src)
{
	int i = 0, d_len = 0;

	while (dest[i++])
		d_len++;

	for (i = 0; src[i]; i++)
		dest[d_len++] = src[i];

	return (dest);
}
