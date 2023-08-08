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
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: null terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytesWRITTEN; /* var declarations */

	if (filename == NULL) /* check NULL filename */
		return (-1);

	/* open the file for appending */
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* append the text content to the file */
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
