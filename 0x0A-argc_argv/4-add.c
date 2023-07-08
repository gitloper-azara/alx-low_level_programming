#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, Error and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *z;
		int num = strtol(argv[i], &z, 10);

		if (*z != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
