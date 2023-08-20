#include "main.h"

int _printf(const char *format, ...)
{
	int i, j;
	char *str;
	va_list ap;
	va_start(ap, format);

	for (i = 0; format[i]; i++)
	{
		while(format[i] != '%')
		{
			if (format[i] == '\0')
				return (i);
			_putchar(format[i]);
			i++;
		}
		i++;
		switch(format[i])
		{
			case 'c': j = va_arg(ap, int);
				  _putchar(j);
				  break;
			case 's': str = va_arg(ap, char *);
				  _puts(str);
				  break;
			case 'd': j = va_arg(ap, int);
				  print_number(j);
				  break;
			case 'i': j = va_arg(ap, int);
				  print_number(j);
				  break;
			default: j = va_arg(ap, int);
				 _putchar(format[i]);
				 break;
		}
	}
	va_end(ap);
	return (i);
}
