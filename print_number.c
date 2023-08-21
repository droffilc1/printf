#include "main.h"

/**
 * print_number - prints an integer
 * @n: The number to be checked
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 1)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
