#include "main.h"

/**
 * print_unsigned - a function that converts %u to print the original number
 * @pfList: the argument in the va_list
 * Return: the length of the unsigned int
 */

int print_unsigned(va_list pfList)
{
	int x = 1;
	int sum = 0;
	unsigned int number;

	number = va_arg(pfList, unsigned int);

	while ((number / x) > 9)
		x = x * 10;
	while (x > 0)
	{
		_putchar('0' + (number / x));
		number = number % x;
		x = x / 10;
		sum++;
	}
	return (sum);
}
