#include "main.h"

/**
 * print_percent - a function that prints % to the console
 * which must be escaped by % first
 * @pfList: % character to be printed
 * Return: 1 on success
 */

int print_percent(__attribute__((unused))va_list pfList)
{
	_putchar('%');
	return (1);
}
