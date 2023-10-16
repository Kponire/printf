#include "main.h"

/**
 * print_address - function that prints the address of a given variable
 * @pfList: the argument in the va_list
 * Return: the length of the address
 */

int print_address(va_list pfList)
{
	unsigned int address[16];
	unsigned int i = 0, sum = 0;
	int count = 0;
	unsigned long j;
	unsigned long k = 1152921504606846976;
	char *str = "(nil)";

	j = va_arg(pfList, unsigned long);

	if (j == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}

	_putchar('0');
	_putchar('x');
	count = 2;
	address[0] = j / k;
	for (i = 1; i < 16; i++)
	{
		k /= 16;
		address[i] = (j / k) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += address[i];
		if (sum || i == 15)
		{
			if (address[i] < 10)
				_putchar('0' + address[i]);
			else
				_putchar('0' + ('a' - ':') + address[i]);
			count++;
		}
	}
	return (count);
}
