#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string that may contain first occurence of byte in accept
 * @accept: string that will be looked into for the first occurence of any
 * byte in s
 *
 * Return: pointer to the byte in 's' that matches one of the bytes in 'accept'
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
