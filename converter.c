#include "main.h"

/**
 * converter - a function that checks for the format specifier in pfList
 * and converts the matched specifier, then prints to stdout
 * @pf: the input format specifier
 * Return: the execute function
 */

int (*converter(char pf))(va_list)
{
	print_f print_types[] = {
		{'c', print_chr},
		{'s', print_str},
		{'i', print_int},
		{'d', print_decimal},
		{'%', print_percent},
		{'\0', NULL},
	};

	int i = 0;

	for (; print_types[i].operation; i++)
	{
		if (pf == print_types[i].operation)
			break;
	}
	return (print_types[i].execute);
}

