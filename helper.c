#include "main.h"

/**
 * print_hex - prints a number in hexadecimal
 * @n: number to be printed
 * @upper: uppercase characters
 *
 * Return: hexadecimal characters
 */
int print_hex(size_t n, int upper)
{
	char hex[] = "0123456789abcdef";
	int count = 0;

	if (n / 16)
	{
		count += print_hex(n / 16, upper);
	}
	if (upper)
	{
		count += _putchar(hex[n % 16] - 32 * (n % 16 > 9));
	}
	else
	{
		count += _putchar(hex[n % 16]);
	}
	return (count);
}
