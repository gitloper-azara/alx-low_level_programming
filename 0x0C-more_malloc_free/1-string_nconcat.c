#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes in s2.
 *
 * Return: string.
 */




char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int length3, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	length3 = length1 + length2;

	if (n >= length2)
		length3 += 1;
	else
	{
		length3 = length1 + n + 1;
		length2 = n;
	}
	s = malloc(sizeof(char) * length3);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		s[i] = s1[i];
	for (j = 0; j < length2; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	return (s);
}
