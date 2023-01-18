#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using function pointer
 * @name: the name to print
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
