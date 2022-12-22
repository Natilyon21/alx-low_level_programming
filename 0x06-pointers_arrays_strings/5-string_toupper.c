#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
