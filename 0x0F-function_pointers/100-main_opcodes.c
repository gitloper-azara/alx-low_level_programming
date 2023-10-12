#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a system's opcodes.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%.2hhx\n", array[i]);
			break;
		}
		printf("%.2hhx ", array[i]);
	}
	return (0);
}
