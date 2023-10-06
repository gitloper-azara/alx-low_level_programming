#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns the length of a string
 * @s: char to check
 *
 * Return: length of string
 */

size_t _strlen(const char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - function that recursively checks the candidacy of
 * a string to be a palindrome.
 * @s: pointer to the string.
 * @start: first character to check.
 * @end: last character to be compared to.
 *
 * Return: 1 on success, 0 if not a palindrome.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] == s[end])
		return (is_palindrome_recursive(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - function that checks if a string is a palindrome using
 * recursion.
 * @s: pointer to the string.
 *
 * Return: 1 on success, 0 if not a palindrome.
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
