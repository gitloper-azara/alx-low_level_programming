#include "variadic_functions.h"

/**
 * print_char - prints char.
 * @args: char type argument list.
 */

void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}

/**
 * print_int - prints int.
 * @args: int type argument list.
 */

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - prints float.
 * @args: float type argument list.
 */

void print_float(va_list args)
{
	double num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * print_string - prints string.
 * @args: string type argument list.
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(nil)";
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything!
 * @format: list of types of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	char *separator_1 = "";
	char *separator_2 = ", ";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*ops[j].c == format[i])
			{
				printf("%s", separator_1);
				ops[j].f(args);
				separator_1 = separator_2;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
