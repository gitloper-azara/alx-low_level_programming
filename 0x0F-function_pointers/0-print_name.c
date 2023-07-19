#include "funtion_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: string
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)

		f(name);
}
