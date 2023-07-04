#include "main.h"

/**
 * _strchr - locates a character in a given string
 * @s: the string to check
 * @c: the character to check
 *
 * Return: pointer to the first occurence of the character checked.
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s != c)
		{
			continue;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
