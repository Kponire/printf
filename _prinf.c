#include "main.h"


int _printf(char const *format, ...)
{
	int sum = 0;
	int (*parameter)(va_list);
	va_list pfList;

	if (format == NULL)
		return (-1);
	va_start(pfList, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			parameter = converter(*format);
			sum += parameter(pfList);
		}
		else
		{
			_putchar(*format);
			sum++;
		}
		format++;
	}
	va_end(pfList);
	return (sum);
}
