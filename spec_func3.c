#include "main.h"

/**
 * handle_non_printable - Handles the custom S conversion specifier
 * @ap: Arguments
 *
 * Return: Number of characters printed
 */
int handle_non_printable(va_list ap)
{
	char *str;
	int count = 0;
	char hex1, hex2;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		return (_printf("(null)"));
	}

	for (; *str != '\0'; str++)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');

			hex1 = (*str >> 4) & 0xF;
			hex2 = *str & 0xF;

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
/**
 * handle_address - prints a pointer
 * @ap: arguments
 *
 * Return: pointer
 */
int handle_address(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	unsigned long int n = (unsigned long int)ptr;
	int count = 0;
	char hexDigits[] = "0123456789abcdef";
	char buffer[sizeof(unsigned long int) * 2];
	unsigned int i;
	unsigned int index = sizeof(buffer) - 1;

	if (ptr == NULL)
	{
		count += _putchar('(');
		count += _putchar('n');
		count += _putchar('i');
		count += _putchar('l');
		count += _putchar(')');
	}
	else
	{
		count += _putchar('0');
		count += _putchar('x');

		while (n > 0)
		{
			buffer[index] = hexDigits[n % 16];
			n /= 16;
			index--;
		}

		for (i = index + 1; i < sizeof(buffer); i++)
		{
			count += _putchar(buffer[i]);
		}
	}

	return (count);
}
/**
 * handle_rev - prints a reversed string
 * @ap: arguments
 *
 * Return: Number of characters printed
 */
int handle_rev(va_list ap)
{
	char *s;
	int len = 0;
	int tel;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[len] != '\0')
	{
		len++;
	}

	for (tel = len - 1; tel >= 0; tel--)
	{
		_putchar(s[tel]);
	}

	return (len);
}
/**
 * handle_rot13 - Rotates string of letters by 13 characters
 * @ap: arguments
 *
 * Return: converted string
 */
int handle_rot13(va_list ap)
{
	int i;
	int j;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(ap, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == s[j])
			{
				_putchar(rot[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}
