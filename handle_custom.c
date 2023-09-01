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
	int tel = 0;

	if (str == NULL)
	{
		return (_printf("(null)"));
	}

	if (str[0] == '%' && str[1] == 'S')
	{
		str += 2;
	}

	for (; *str != '\0'; str++)
	{
		if (*str < 32 || *str >= 127)
		{
			tel += _putchar('\\');
			tel += _putchar('x');
			tel += print_hexadecimal(*str, 1);
		}
		else
		{
			tel += _putchar(*str);
		}
	}

	return (tel);
}
