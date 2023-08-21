#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary to stdout
 * @n: The unsigned int to print in binary
 */
void print_binary(unsigned int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}

	_putchar((n % 2) + '0');
}
