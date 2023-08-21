#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
void print_number(int n);
void print_binary(unsigned int n);
int handle_conversion(const char *format, int *i, va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H */
