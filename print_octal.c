#include "main.h"

/**
 * print_octal - a function that converts integer to octal numbers
 * @pfList: the argument in the va_list
 * Return: i the length of the octal number
 */

int print_octal(va_list pfList)
{
	int i, j, k;
	unsigned int number, size;
	char *len;

	number = va_arg(pfList, unsigned int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	size = number;
	for (i = 0; size > 0; i++)
	{
		size = size / 8;
	}
	len = malloc((sizeof(char) * i) + 1);
	if (len == NULL)
		return (-1);
	for (j = 0; number > 0; j++)
	{
		len[j] = number % 8;
		number = number / 8;
	}
	for (k = (j - 1); k >= 0; k--)
	{
		_putchar('0' + len[k]);
	}
	free(len);
	return (i);
}
