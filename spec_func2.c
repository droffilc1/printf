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

/**
 * handle_hex - print hexadecimal in lowercase
 * @ap: arguments
 *
 * Return: hex characters
 */
int handle_hex(va_list ap)
{
	unsigned int n;
	int count = 0;
	int index = 0;
	char hexDigits[32];
	int i;
	int rem;

	n = va_arg(ap, unsigned int);

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n > 0)
	{
		rem = n % 16;
		hexDigits[index++] = (rem < 10) ? rem + '0' : rem - 10 + 'a';
		n /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(hexDigits[i]);
	}
	return (count);
}
/**
 * handle_hex_uppercase - print hexadecimal in uppercase
 * @ap: arguments
 *
 * Return: hex characters
 */
int handle_hex_uppercase(va_list ap)
{
	unsigned int n;
	int count = 0;
	int index = 0;
	char hexDigits[32];
	int i;
	int rem;

	n = va_arg(ap, unsigned int);

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n > 0)
	{
		rem = n % 16;
		hexDigits[index++] = (rem < 10) ? rem + '0' : rem - 10 + 'A';
		n /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(hexDigits[i]);
	}
	return (count);
}
/**
 * handle_octal - prints the number as an octal
 * @ap: argumnets
 *
 * Return: number of digits printed
 */

int handle_octal(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int count = 0;
	int index = 0;
	char octalDigits[32];
	int i;

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (n > 0)
	{
		octalDigits[index++] = (n % 8) + '0';
		n /= 8;
	}

	for (i = index - 1; i >= 0; i--)
		count += _putchar(octalDigits[i]);

	return (count);

}

