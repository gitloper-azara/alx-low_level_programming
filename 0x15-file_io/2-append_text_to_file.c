#include "main.h"

/**
 *
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytesWRITTEN;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytesWRITTEN = write(fp, text_content, _strlen(text_content));
		if (bytesWRITTEN == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
