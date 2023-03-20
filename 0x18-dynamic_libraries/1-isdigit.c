#include "main.h"
/**
 * _isdigit - Checks for characters that are digits
 * @c: Character
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
