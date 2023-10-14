#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stdio.h>

typedef struct print
{
	char operation;
	int (*execute)(va_list);
} print_f;

int _printf(char const *format, ...);
int _putchar(char c);
int print_chr(va_list pfList);
int print_str(va_list pfList);
int print_int(va_list pfList);
int print_decimal(va_list pfList);

#endif
