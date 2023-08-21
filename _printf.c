#include "main.h"
#include <stdarg.h>
#include <stdio.h>
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
	int i;
	int printed_chars = 0;
	char c;
	char *str;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				putchar(c);
				printed_chars++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				fputs(str, stdout);
				printed_chars += strlen(str);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				printed_chars++;
			}
			/* can add more conversion specifiers here if needed */
		}
		else
		{
			putchar(format[i]);
			printed_chars++;
		}
	}

	va_end(args);
	return (printed_chars);
}
