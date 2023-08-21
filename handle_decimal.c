#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * handle_decimal - Handles the %d and %i conversion specifiers
 * @args: The va_list containing the argument to be printed
 *
 * Return: Number of characters printed
 */
int handle_decimal(va_list args)
{
	int num = va_arg(args, int);
	int printed_chars = 0;

	printed_chars += printf("%d", num);

	return (printed_chars);
}
