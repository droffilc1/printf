#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 *@str: To be checked
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
