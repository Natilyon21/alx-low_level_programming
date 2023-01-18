#include "main.h"
#include <stdlib.h>

/**
  * print_name - initializes a variable
  * @name: ...
  * @f: ...
  * Return: Null
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
