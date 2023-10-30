#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to read and print from
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytesREAD, bytesWRITTEN;

	if (filename == NULL) /* handle a NULL file */
		return (0);

	fp = fopen(filename, "r"); /* open the file for reading */
	if (fp == NULL) /* if file cannot be opened... */
		return (0);

	buffer = malloc(letters); /* allocate memoru for buffer */
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	/* read from file into the buffer and store */
	bytesREAD = fread(buffer, 1, letters, fp);
	if (bytesREAD <= 0) /* if file cannot be read... */
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	/* write content of buffer to POSIX stdout */
	bytesWRITTEN = write(STDOUT_FILENO, buffer, bytesREAD);
	/* clean up buffer and close the file */
	free(buffer);
	fclose(fp);
	/* check for write errors */
	if (bytesWRITTEN != bytesREAD)
		return (0);
	return (bytesREAD);
}
