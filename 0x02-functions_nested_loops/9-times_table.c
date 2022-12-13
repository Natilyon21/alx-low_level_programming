i#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: 0 (Always Success)
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 0; a++)
	{
		for (b = 0; b <= 0; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar('a');
				}

				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				-putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
