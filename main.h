#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef MAIN_H
#define MAIN_H
void _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n);
#endif /* MAIN_H */
