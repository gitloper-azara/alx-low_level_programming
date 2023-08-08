#include "main.h"

/**
 * _strlen - returns the length of a string
 * @string: the string
 *
 * Return: string length
 */

int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * create_file - creates a new file and writes text content into it
 * @filename: pointer to the name of the file
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytesWRITTEN; /* var declarations */

	if (filename == NULL) /* handle NULL filename */
		return (-1);
	/* open the file for writing, create if not exist, trunc otherwise */
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* write the text content to file */
		bytesWRITTEN = write(fp, text_content, _strlen(text_content));
		if (bytesWRITTEN == -1)
		{
			close(fp);
			return (-1);
		}
	}
	/* close the file */
	close(fp);
	return (1);
}
