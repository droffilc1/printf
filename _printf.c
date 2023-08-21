#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Additional arguments based on format
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i;
    int printed_chars = 0;

    va_start(args, format);

    i = 0;

    while (format[i])
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            printed_chars++;
        }
        else
        {
            i++;
            printed_chars += handle_conversion(format, &i, args);
        }
        i++;
    }

    va_end(args);
    return printed_chars;
}
