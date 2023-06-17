#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: A program that prints the alphabet in lowercase
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
