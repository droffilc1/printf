#include "main.h"
#include <string.h>

/**
 * handle_conversion - Handles different conversion specifiers
 * @format: The format string
 * @i: Pointer to the current index in the format string
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_conversion(const char *format, int *i, va_list args)
{
	int printed_chars = 0;

	if (format[*i] == 'c')
	{
		_putchar(va_arg(args, int));
		printed_chars++;
	}
	else if (format[*i] == 's')
	{
		_puts(va_arg(args, char *));
		printed_chars += strlen(va_arg(args, char *));
	}
	else if (format[*i] == 'd' || format[*i] == 'i')
	{
		print_number(va_arg(args, int));
	}
	else if (format[*i] == 'b')
	{
		print_binary(va_arg(args, unsigned int));
	}
	else if (format[*i] == '%')
	{
		_putchar('%');
		printed_chars++;
	}

	return (printed_chars);
}
