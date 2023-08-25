#include "main.h"

/**
 * handle_unsigned -  prints unsigned numbers
 * @ap: arguments
 *
 *
 * Return: number of characters printed
 */
int handle_unsigned(va_list ap)
{
	unsigned int divisor = 1, i, digit, num;
	int count = 0;

	num = va_arg(ap, unsigned int);

	while (num / divisor > 9)
		divisor *= 10;

	for (i = divisor; i >= 1; i /= 10)
	{
		digit = (num / i) % 10;
		count += _putchar(digit + '0');
	}
	return (count);
}
