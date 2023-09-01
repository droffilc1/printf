#include "main.h"

/**
 * handle_custom_string - Handles the custom S conversion specifier
 * @ap: Arguments
 *
 * Return: Number of characters printed
 */
int handle_custom_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;

	char hex1, hex2;

	if (str == NULL)
	{
		return (_printf("(null)"));
	}

	for (; *str != '\0'; str++)
	{
		if (*str < 32 || *str >= 127)
		{
			hex1 = (*str >> 4) & 0xF;
			hex2 = *str & 0xF;

			count += _putchar('\\');
			count += _putchar('x');

			if (hex1 < 10)
				count += _putchar(hex1 + '0');
			else
				count += _putchar(hex1 - 10 + 'A');

			if (hex2 < 10)
				count += _putchar(hex2 + '0');
			else
				count += _putchar(hex2 - 10 + 'A');
		}
		else
		{
			count += _putchar(*str);
		}
	}

	return (count);
}
