#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: num of argument count of the program.
 * @argv: argument vector array.
 *
 * Return: 0 on success, error and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = (x * y);
		printf("%d\n", z);
	}
	return (0);
}
