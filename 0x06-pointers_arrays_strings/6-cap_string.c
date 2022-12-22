#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int len = 13;
	int a = 0, i;
	char n[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < len)
		{
			if ((a == 0 || s[a - 1] == n[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
				i++;
		}
		a++;
	}
	return (s);
}
