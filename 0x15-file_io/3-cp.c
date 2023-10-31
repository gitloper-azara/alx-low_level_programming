#include "main.h"

/**
 * _buffer - allocates memory for a buffer
 * @file: name of the file related to buffer
 *
 * Return: newly allocated buffer.
 */

char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(97);
	}
	return (buffer);
}

/**
 * closeFILE - closes a file descriptor
 * @fd: file descriptor to be closed
 * Return: void.
 */

void closeFILE(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - program entry point
 * @argc: command-line argument count
 * @argv: command-line argument vector array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytesREAD, bytesWRITTEN;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open the file for reading */
	buffer = _buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	bytesREAD = read(file_from, buffer, sizeof(buffer));
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		if (file_from == -1 || bytesREAD == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytesWRITTEN = write(file_to, buffer, bytesREAD);
		if (file_to == -1 || bytesWRITTEN == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			free(buffer);
			exit(99);
		}

		bytesREAD = read(file_from, buffer, sizeof(buffer));
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytesREAD > 0);

	free(buffer);
	closeFILE(file_from);
	closeFILE(file_to);
	return (0);
}
