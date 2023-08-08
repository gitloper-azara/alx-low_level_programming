#include "main.h"

/**
 * read_textfile - Reads and prints the content of a text file to stdout
 * @filename: Pointer to the name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The number of letters read and printed, 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytesREAD, bytesWRITTEN; /* var declarations */

	if (filename == NULL) /* handle NULL filename */
		return (0);

	/* Open the file for reading */
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	/* allocate mem for the buffer */
	buffer = malloc(letters);
	if (buffer == NULL) /* check mem allocation failure */
	{
		fclose(fp);
		return (0);
	}

	/* read from file into the buffer */
	bytesREAD = fread(buffer, 1, letters, fp);
	if (bytesREAD <= 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	/* write the buffer to stdout */
	bytesWRITTEN = write(STDOUT_FILENO, buffer, bytesREAD);

	/* clean up and close the file */
	free(buffer);
	fclose(fp);
	/* check for write errors */
	if (bytesWRITTEN != bytesREAD)
		return (0);
	return (bytesREAD);
}
