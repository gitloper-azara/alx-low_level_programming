#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct op
{
	char c;
	void (*f)(va_list ap);
} op_t;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS */
