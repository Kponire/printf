#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - a function that compares the operation with the
 * format string after the % charcter and execute va_list appropriately
 * @operation: to check for the conversion specifiers
 * @execute: returns a pointer to an interger va_list
 */

typedef struct print
{
	char operation;
	int (*execute)(va_list);
} print_f;

int _printf(char const *format, ...);
int (*converter(char pf))(va_list);
int _putchar(char c);
int print_chr(va_list pfList);
int print_str(va_list pfList);
int print_int(va_list pfList);
int print_decimal(va_list pfList);

#endif
