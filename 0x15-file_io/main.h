#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>

#define ELF_MAGIC "\177ELF"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * struct Elf32 - a structure representation of the ELF header in a 32-bit
 * ELF file
 * @e_ident: ELF identification bytes
 * @e_type: object file type
 * @e_entry: entry point virtual address
 */

typedef struct _Elf32_Ehdr
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint32_t e_entry;
} _Elf32_Ehdr;

#endif /* MAIN_H */
