#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary to stdout
 * @n: The unsigned int to print in binary
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	int len = 0;

	if (n > 1)
	{
		len += print_binary(n / 2);
	}

	_putchar((n % 2) + '0');
	len++;

	return (len);
}
