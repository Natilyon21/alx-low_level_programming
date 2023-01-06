#include "main"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checks for valid input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int checker(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - Prints the minimum number of coins
 * to make change for an amount of cents.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int cents;
	int coins;

	cents = coins = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
			printf("0\n");
		if (checker(argc, 1, 0, argv) == 0)
		{
			cents = atoi(argv[1]);
			for ( ; cents >= 25; coins++, cents -= 25)
				;
			for ( ; cents >= 10; coins++, cents -= 10)
				;
			for ( ; cents >= 5; coins++, cents -= 5)
				;
			for ( ; cents >= 2; coins++, cents -= 2)
				;
			for ( ; cents >= 1; coins++, cents--)
				;
			printf("%d\n", coins);
		}
	}
	else
		printf("Error\n");
	return (0);
}
/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{

	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(i);
		printf("%d\n", coin);
	}
	return (0);
}
