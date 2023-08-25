#include "main.h"

/**
 * handle_hex - prints a number in hexadecimal
 * @n: number to be printed
 * @c: number of characters
 *
 * Return: hexadecimal characters
 */
int handle_hex(unsigned int long n, unsigned int long c)
{
	char hex_nums[] = "0123456789abcdef";
	int count = 0;

	if (n / 16)
	{
		count += handle_hex(n / 16, c);
	}
	if (c)
	{
		count += _putchar(hex_nums[n % 16] - 32 * (n % 16 > 9));
	}
	else
	{
		count += _putchar(hex_nums[n % 16]);
	}

	return (count);
}
