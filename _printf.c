#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * _printf - custom printf function
 * @format: The format string
 * @...: Additional arguments based on format
 *
 * Return: Number of characters printed
 */
<<<<<<< HEAD

int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	spec_t specs[] = {
		{"c", handle_char},
		{"s", handle_string},
		{"d", handle_integer},
		{"i", handle_integer},
		{"%", handle_percent},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	count = get_fmt(format, specs, ap);
	va_end(ap);
	return (count);
=======
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int printed_chars = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				/* Handle 'c'*/
			}
			else if (format[i] == 's')
			{
				/* Handle 's' */
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				printed_chars += handle_decimal(args); /* Call integer handler */
			}
			else if (format[i] == '%')
			{
				/* Handle '%%' */
			}
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}

	va_end(args);
	return (printed_chars);
>>>>>>> 8a0d0b1e0fd5883fa2ae81c57e3463f6a0c1e340
}
