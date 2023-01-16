#include <unistd>

/**
 * _putchar - ...
 * @c: ...
 * Return: ...
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
