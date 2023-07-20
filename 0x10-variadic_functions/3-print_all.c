#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @ap: char type argument list
 */

void print_char(va_list ap)
{
	char ch = va_arg(ap, int);

	printf("%c", ch);
}

/**
 * print_int - prints int
 * @ap: int type argument list
 */
void print_int(va_list ap)
{
	int num = va_arg(ap, int);

	printf("%d", num);
}

/**
 * print_float - prints float
 * @ap: float type argument list
 */

void print_float(va_list ap)
{
	double num = va_arg(ap, double);

	printf("%f", num);
}

/**
 * print_string - prints string
 * @ap: string argument
 */

void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of argument
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	char *separator_1 = "";
	char *separator_2 = ", ";

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		int j = 0;

		while (ops[j].c != '\0')
		{
			if (format[i] == ops[j].c)
			{
				printf("%s", separator_1);
				ops[j].f(ap);
				separator_1 = separator_2;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
