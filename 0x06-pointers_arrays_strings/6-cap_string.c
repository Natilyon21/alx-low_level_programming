#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int x, y;
	int t;
	char n[] = ",;.!?(){}\nt\" ";


	for (x = 0; t = 0; s[x] != '\0'; x++)
	{
		if (s[0] > 96 && s[0] < 123)
			t = 1;
		for (y = 0; n[y] != '\0'; y++)
		{
			if (n[y] == s[x])
				t = 1;
		}
		if (t)
		{
			if (s[x] > 96 && s[x] < 123)
	s}
