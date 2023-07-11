#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated upon
 * @s2: string to concatenate
 *
 * Return: NULL if unsuccessful
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0;
	int len2 = 0;
	int len3, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	len3 = len1 + len2;

	s = (char *) malloc(len3 * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		s[i + len1] = s2[i];
	}

	return (s);
}
