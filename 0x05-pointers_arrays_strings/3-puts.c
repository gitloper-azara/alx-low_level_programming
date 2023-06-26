#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to be printed
 *
 * Return: string to stdout
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (str[i]);
}
