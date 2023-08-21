#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints formated string
 * @format: string format
 * @...: extra arguments
 *
 * Return: 0 (Success)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i =  0;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(ap, int));
			}
			else if (format[i] == 's')
			{
				_puts(va_arg(ap, char *));
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				print_number(va_arg(ap, int));
			}
			else
			{
				_putchar(format[i]);
			}
		}
		i++;
	}

	va_end(ap);
	return (i);
}
