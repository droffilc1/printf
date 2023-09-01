#include "main.h"

/**
 * _printf - custom printf function
 * @format: The format string
 * @...: Additional arguments based on format
 *
 * Return: Number of characters printed
 */
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
		{"b", handle_binary},
		{"u", handle_unsigned},
		{"o", handle_octal},
		{"x", handle_hex},
		{"X", handle_hex_uppercase},
		{"S", handle_non_printable},
		{"p", handle_address},
		{"r", handle_rev},
		{"R", handle_rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	count = get_fmt(format, specs, ap);
	va_end(ap);
	return (count);
}
