#include "main.h"

/**
 * handle_unknown - handles unknown conversion specifiers
 * @ap: arguments
 *
 * Return: 0
 */
int handle_unknown(va_list ap)
{
	_putchar('%');
	_putchar(va_arg(ap, int));
	return (2);
}

/**
 * handle_address - prints address
 * @ap: arguments
 *
 * Return: the address
 */
int handle_address(va_list ap)
{
	void *p;
	size_t n;

	p = va_arg(ap, void *);
	n = (size_t)p;
	_putchar('0');
	_putchar('x');
	return (print_hex(n, 0));
}
