#include "main.h"

/**
 * clear_bit - set value to 1 with given index
 * @n:pointer to unsigned int
 * @index: index
 * Return: 1 on success -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

x <<= index;
*n &= ~x;
return (1);
}
