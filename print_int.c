#include "main.h"

/**
 * print_int - a function that prints an integer from the pfList
 * when it encounters a %d specifier
 * @pfList: the input integer from the pfList
 * Return: the length of the integer
 */

int print_int(va_list pfList)
{
	int number;
	int sum = 0, x = 1;

	number = va_arg(pfList, int);
	if (number < 0)
	{
		number *= -1;
		putchar('-');
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
