#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * _printf - custom printf function
 * @format: The format string
 * @...: Additional arguments based on format
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int printed_chars = 0;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		{
			else
			{
				i++;
				if (format[i] == 'c')
				{
					_putchar(va_arg(args, int));
					printed_chars++;
				}
				else if (format[i] == 's')
				{
					_puts(va_arg(args, char *));
					printed_chars += strlen(va_arg(args, char *));
				}
				else if (format[i] == 'd' || format[i] == 'i')
				{
					print_number(va_arg(args, int));
				}
				else if (format[i] == 'b')
				{
					print_binary(va_arg(args, unsigned int));
				}
				else if (format[i] == '%')
				{
					_putchar('%');
					printed_chars++;
				}
			}
			i++;
		}

		va_end(args);
		return (printed_chars);
}
