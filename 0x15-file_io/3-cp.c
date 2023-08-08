#include "main.h"

/**
 * exit_on_error - Print an error message and exit with a specific code
 * @code: The exit code
 * @message: The error message to print
 * Return: Void
 */

void exit_on_error(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}

/**
 * main - program entry point
 * @argc: command-line argument count
 * @argv: command-line argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from_file, to_file, bytesREAD, bytesWRITTEN;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		exit_on_error(97, "Usage: cp file_from file_to", "");

	/* open the source file for reading */
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1) /* check existence of file or if can be read ? */
		exit_on_error(98, "Error: Can't read from file %s", argv[1]);

	/* open the destination file for writing */
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1) /*check if file can't be created or writing fails */
	{
		close(from_file);
		exit_on_error(99, "Error: Cant't write to file %s", argv[2]);
	}

	/* read from source and write to destination */
	while ((bytesREAD = read(from_file, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWRITTEN = write(to_file, buffer, bytesREAD);
		if (bytesWRITTEN == -1 || bytesWRITTEN != bytesREAD)
		{
			close(from_file);
			close(to_file);
			exit_on_error(99, "Error: Can't read from file %s",
				argv[2]);
		}
	}

	/* check for read error */
	if (bytesREAD == -1)
	{
		close(from_file);
		close(to_file);
		exit_on_error(98, "Error: Can't read from file %s", argv[1]);
	}

	/* close file descriptors */
	if (close(from_file) == -1 || close(to_file) == -1)
		exit_on_error(100, "Error: Can't close fd", "");

	return (0);
}
