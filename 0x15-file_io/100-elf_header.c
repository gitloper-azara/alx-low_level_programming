#include "main.h"
/**
 * print_elf_type - a function that takes the e-type field as an argument and
 * prints the "Type" field
 * @e_type: the type fied tobe used
 */
void print_elf_type(uint16_t e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
	{
		printf("NONE (Unknown)");
		break;
	}
	case ET_REL:
	{
		printf("REL (Relocatable file)");
		break;
	}
	case ET_EXEC:
	{
		printf("EXEC (Executable file)");
		break;
	}
	case ET_DYN:
	{
		printf("DYN (Shared object file)");
		break;
	}
	case ET_CORE:
	{
		printf("CORE (Core file)");
		break;
	}
	default:
		printf("Unknown");
	}
	printf("\n");
}

/**
 * print_elf_header - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(_Elf32_Ehdr *header)
{
	int i;
	char *elf_class, *data_encoding;
	const char *operating_sys = "Unknown";

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	if (header->e_ident[4] == 1)
		elf_class = "ELF32";
	else
		elf_class = "ELF64";
	printf("  Class:                             %s\n", elf_class);

	if (header->e_ident[5] == 1)
		data_encoding = "2's complement, little endian";
	else
		data_encoding = "Unknown";
	printf("  Data:                              %s\n", data_encoding);
	printf("  Version:                           %d (current)\n",
	       header->e_ident[6]);
	if (header->e_ident[7] == 0)
		operating_sys = "UNIX - System V";
	printf("  OS/ABI:                            %s\n", operating_sys);
	printf("  ABI Version:                       %d\n",
	       header->e_ident[8]);
	print_elf_type(header->e_type);
	printf("  Entry point address:               0x%08x\n",
	       header->e_entry);
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
	_Elf32_Ehdr header;

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
