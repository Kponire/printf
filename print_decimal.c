#include "main.h"

/**
 * print_decimal - a function that prints a decimal from the pfList
 * when it encounters a %d specifier
 * @pfList: the input decimal from the pfList
 * Return: the length of the decimal number
 */

int print_decimal(va_list pfList)
{
	int number;
	int sum = 0, x = 1;

	number = va_arg(pfList, int);
	if (number < 0)
	{
		number *= -1;
		_putchar('-');
		sum++;
	}
	if (number == INT_MIN)
		number++;
	while ((number / x) > 9)
		x *= 10;
	number--;
	while (x >= 1)
	{
		_putchar('0' + ((number / x) % 10));
		x /= 10;
		sum++;
	}
	return (sum);
}
