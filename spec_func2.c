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
	unsigned long int n;

	p = va_arg(ap, void *);
	n = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	return (print_hex(n, 0));
}
/**
*handle_ascii - prints string except non printable characters
*@arg: string

*Return: number of characters
*/
int handle_ascii(va_list ap)
{
	unsigned int value;
	int i;
	char * str;

	str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			value = str[i];
			_putchar('\\');
			_putchar('x');
			print_hex(value, 1);
		}
		else
			_putchar(str[i]);

		i++;
	}
	return (i);
}
