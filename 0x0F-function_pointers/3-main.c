#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, z;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = get_op_func(argv[2]);

	if (!opr)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = opr(x, y);

	printf("%d\n", z);

	return (0);
}
