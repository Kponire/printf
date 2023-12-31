#include "main.h"

/**
 * print_decimal - a function that prints a decimal from the pfList
 * when it encounters a %d specifier
 * @pfList: the input decimal from the pfList
 * Return: the length of the decimal number
 */

int print_decimal(va_list pfList)
{
	unsigned int number;
	int sum = 0, x = 1;

	number = va_arg(pfList, int);
	if ((int)number < 0)
	{
		number *= -1;
		_putchar('-');
		sum++;
	}
	while ((number / x) > 9)
		x *= 10;
	while (x >= 1)
	{
		_putchar('0' + ((number / x) % 10));
		x /= 10;
		sum++;
	}
	return (sum);
}
