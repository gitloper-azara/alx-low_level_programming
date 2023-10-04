#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @str: string to iterate.
 *
 * Return: length of the string.
 */

int _strlen(char *str)
{
	if (*str != '\0')
		return (1 + _strlen(str + 1));
	else
		return (0);
}

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argc - argument count.
 * @av: argv - argument vector.
 *
 * Return: a pointer to a new str.
 */

char *argstostr(int ac, char **av)
{
	int length, x, y, z;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (x = 0; x < ac; x++)
		length += _strlen(av[x]) + 1;

	string = malloc(length * sizeof(char) + 1);

	if (string == NULL)
		return (NULL);

	y = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < _strlen(av[x]); y++)
		{
			string[z] = av[x][y];
			z++;
		}
		string[z] = '\n';
		z++;
	}
	string[z] = '\0';
	return (string);
}

