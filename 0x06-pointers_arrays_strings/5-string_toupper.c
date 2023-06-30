#include "main.h"

/**
 * string_toupper - change from lower to uppercase
 * @s: string
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			i++;
		}
	}
	return (s);
}
