#include "main.h"

/**
 * _strspn - gets or counts the length of a prefix substring
 * @s: segment consisting of bytes
 * @accept: bytes in the segment
 *
 * Return: number of bytes in the segment (accept)
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0;
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != ' ')
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				{
					z++;
				}
			}
		}
		else
		{
			return (z);
		}
	}
	return (z);
}
