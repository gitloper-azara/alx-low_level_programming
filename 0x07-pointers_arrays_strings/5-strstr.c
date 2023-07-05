#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurence of the substring in main string.
 * @needle: substring to be located
 * @haystack: main string.
 *
 * Return: pointer to the beginning of the loacted substring or NULL if the
 * substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && (haystack[i] == needle[0]); j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (haystack + i);
		}
	}
	return (0);
}
