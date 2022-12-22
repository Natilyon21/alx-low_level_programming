#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: s
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
			if ((a == 0 || x[a - 2] == n[i] && x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
				i++;
		}
		a++;
	}
	return (s);
}
