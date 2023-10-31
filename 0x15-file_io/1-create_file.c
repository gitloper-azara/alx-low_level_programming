#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytesWRITTEN;

	if (filename == NULL) /* handle a NULL file */
		return (-1);
	/*
	 * open the file for writing, create a new file if it doesn't exist
	 * if it exists, truncate the text_content to the last line of file
	 */
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* write the text_content to the file */
		bytesWRITTEN = write(fp, text_content, _strlen(text_content));
		if (bytesWRITTEN == -1)
		{
			close(fp);
			return (-1);
		}
	}
	/* close the opened file */
	close(fp);
	return (1);
}
