#include "main.h"

/**
 * print_str - a function that print the string in the pfList
 * when it encounters %s
 * @pfList: the string to be printed
 * Return: the length of the string
 */

int print_str(va_list pfList)
{
	int i;
	char *str;

	str = va_arg(pfList, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i - 1);
}
