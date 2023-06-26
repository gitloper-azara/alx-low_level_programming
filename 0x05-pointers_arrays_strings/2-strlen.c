#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: char to check
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	return (a);
}
