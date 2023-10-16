#include "main.h"

/**
 * print_chr - a function to print character from the pfList.
 * it converts the specifier %c into readeable format
 * @pfList: the character to be printed
 * Return: 1 which indicates success
 */

int print_chr(va_list pfList)
{
	char character;

	character = va_arg(pfList, char);
	_putchar(character);
	return (1);
}
