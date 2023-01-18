#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * Desc: ...
 * @n: ...
 * @separator: char
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *j;

	va_start(valist, n);
	for (i = 0 ; i < n ; i++)
	{
		j = va_arg(valist, char*);
		if (j  == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
		}
		if (separator != 0 && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
