#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums 2 numbers.
 * @a: ...
 * @b: ...
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtractions two numbers.
 * @a: ...
 * @b: ...
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: ...
 * @b: ...
 * Return: multiply result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers.
 * @a: ...
 * @b: ...
 * Return: division result.
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the module between two numbers.
 * @a: ...
 * @b: ...
 * Return: the module
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
