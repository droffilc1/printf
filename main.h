#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spec - Struct spec
 *
 * @fmt:The operator
 * @f: The associated function
 */
typedef struct spec
{
	char *fmt;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int get_fmt(const char *format, spec_t specs[], va_list ap);

int _putchar(char c);
int print_number(va_list ap);

int handle_char(va_list ap);
int handle_string(va_list ap);
int handle_integer(va_list ap);
int handle_percent(__attribute__((unused))va_list ap);
=======
#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
void print_number(int n);
void print_binary(unsigned int n);
int handle_conversion(const char *format, int *i, va_list args);
int _printf(const char *format, ...);
int handle_decimal(va_list args);

>>>>>>> 8a0d0b1e0fd5883fa2ae81c57e3463f6a0c1e340
#endif /* MAIN_H */
