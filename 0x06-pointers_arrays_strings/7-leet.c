#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int a, b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char n[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' || upper[b] != '\0'; b++)
		{
			if (s[a] == lower[b] || s[a] == upper[b])
			{
				s[a] = n[b];
				break;
			}
		}
	}
	return (s);
}
