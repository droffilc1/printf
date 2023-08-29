#include "main.h"

/**
 * handle_non_printable - handles non-printable characters
 * @ap: arguments
 *
 * Return: printed string
 */
int handle_non_printable(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	int count = 0;
	int numDigits;
	unsigned long int address;
	int shift;
	int digit;

	count += _putchar('0');
	count += _putchar('x');

	address = (unsigned long int)ptr;


	numDigits = sizeof(unsigned long int) * 2;
	for (shift = (numDigits - 1) * 4; shift >= 0; shift -= 4)
	{
		digit = (address >> shift) & 0xF;
		count += _putchar(digit < 10 ? digit + '0' : digit - 10 + 'a');
	}

	return (count);
}
/**
 * handle_address - prints a pointer
 * @ap: arguments
 *
 * Return: pointer
 */
int handle_address(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	unsigned long int n = (unsigned long int)ptr;
	int count = 0;
	char hexDigits[] = "0123456789abcdef";
	char buffer[sizeof(unsigned long int) * 2];
	unsigned int i;
	unsigned int index = sizeof(buffer) - 1;

	if (ptr == NULL)
	{
		count += _putchar('(');
		count += _putchar('n');
		count += _putchar('i');
		count += _putchar('l');
		count += _putchar(')');
	}
	else
	{
		count += _putchar('0');
		count += _putchar('x');

		while (n > 0)
		{
			buffer[index] = hexDigits[n % 16];
			n /= 16;
			index--;
		}

		for (i = index + 1; i < sizeof(buffer); i++)
		{
			count += _putchar(buffer[i]);
		}
	}

	return (count);
}
/**
 * handle_rev - prints a string, in reverse
 * @ap: arguments
 *
 * Return: reversed string
 */
int handle_rev(va_list ap)
{
	char *s;
	int i, j, len;

	s = va_arg(ap, char *);

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = 1;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (0);
}
