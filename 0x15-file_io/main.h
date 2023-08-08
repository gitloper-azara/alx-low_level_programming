#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *string);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_on_error(int code, const char *message, const char *filename, int fp);

#endif /* MAIN_H */
