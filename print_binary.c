#include "main.h"

/**
 * print_binary - prints binary
 * @pfList: argument holder
 * Return: 0
 */

int print_binary(va_list pfList)
{
	unsigned int i, j, k;
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
		size = size / 2;
	}
	len = malloc((sizeof(char) * i) + 1);
	if (len == NULL)
		return (-1);
	for (j = 0; number > 0; j++)
	{
		len[j] = number % 2;
		number = number / 2;
	}
	for (k = (j - 1); k > 0; k--)
	{
		_putchar('0' + len[k]);
	}
	free(len);
	return (i + 1);
}
