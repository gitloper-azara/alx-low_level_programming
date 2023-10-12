#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - Struct op.
 * @c: char data type.
 * @f: function associated with it.
 */

typedef struct op
{
	char c;
	void (*f)(va_list args);
} op_t;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS */
