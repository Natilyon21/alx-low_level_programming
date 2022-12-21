#include "main.h"

/**
 * strcat - Concatenates the pointed the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest
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
