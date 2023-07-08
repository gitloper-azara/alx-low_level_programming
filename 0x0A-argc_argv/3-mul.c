#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @agrc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, error and -1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
