#include "main.h"

/**
 * errorEXIT - print an error message to stderr and exit with a code
 * @code: the exit code
 * @message: error message to print
 * @filename: name of the file related to the error
 * @fd: file descriptor value
 * Return: Void
 */

void errorEXIT(int code, const char *message, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename);
	if (fd != -1)
		dprintf(STDERR_FILENO, " %d", fd);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}

/**
 * main - program entry point
 * @argc: command-line argument count
 * @argv: command-line argument vector array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int from_file, to_file, bytesREAD, bytesWRITTEN;
	char buffer[BUFFER_SIZE];
	char *ptr = buffer;

	if (argc != 3)
		errorEXIT(97, "Usage: cp file_from file_to", "", -1);
	/* open the file for reading */
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
		errorEXIT(98, "Error: Can't read from file %s", argv[1], -1);
	if (argv[2][0] == '\0')
	{
		close(from_file);
		errorEXIT(99, "Error: Can't write to ", "", -1);
	}
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1)
	{
		close(from_file);
		errorEXIT(99, "Error: Can't write to %s", argv[2], -1);
	}
	bytesREAD = read(from_file, buffer, BUFFER_SIZE);
	while (bytesREAD > 0)
	{
		do {
			bytesWRITTEN = write(to_file, buffer, bytesREAD);
			if (bytesWRITTEN >= 0)
			{
				bytesREAD -= bytesWRITTEN;
				ptr += bytesWRITTEN;
			}
			else
			{
				close(from_file);
				close(to_file);
				errorEXIT(99, "Error: Can't write to %s",
					  argv[2], -1);
			}
		} while (bytesREAD > 0);
	}
	if (bytesREAD == -1)
	{
		close(from_file);
		close(to_file);
		errorEXIT(98, "Error: Can't read from file %s", argv[1], -1);
	}
	if (close(from_file) == -1 || close(to_file) == -1)
		errorEXIT(100, "Error: Can't close fd", "",
			      (close(from_file) == -1) ? from_file : to_file);
	return (0);
}
