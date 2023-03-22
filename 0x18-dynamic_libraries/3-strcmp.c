#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: input
 * @s2: input
 * Return: negative 0 or positive
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
