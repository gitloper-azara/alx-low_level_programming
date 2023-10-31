#include "main.h"

/**
 * print_elf_header - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf32_Ehdr *header)
{
	int i;
	char *elf_class, *data_encoding;

	printf("Magic:   ");
	for (i = 0; i < 4; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	if (header->e_ident[4] == 1)
		elf_class = "ELF32";
	else
		elf_class = "ELF64";
	printf("Class:   %s\n", elf_class);

	if (header->e_ident[5] == 1)
		data_encoding = "2's complement, little endian";
	else
		data_encoding = "Unknown";
	printf("Data:    %s\n", data_encoding);
	printf("Version: %d (current)\n", header->e_ident[6]);
	printf("OS/ABI:  %d\n", header->e_ident[7]);
	printf("ABI Version: %d\n", header->e_ident[8]);
	printf("Type:    %d\n", header->e_type);
	printf("Entry point address: 0x%08x\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("read");
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELF_MAGIC, 4) != 0)
	{
		dprintf(STDERR_FILENO, "This is not an ELF file.\n");
		close(fd);
		return (98);
	}

	print_elf_header(&header);
	close(fd);

	return (0);
}
