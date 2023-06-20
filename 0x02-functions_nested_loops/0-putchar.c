#include "main.h"
#include <unistd.h>

/**
 * main - program prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
