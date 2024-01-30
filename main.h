#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char * const format, ...);
int _strlen(char *s);
int _putchar(char c);
int printf_char(int *i, int *len, va_list char_value);
int printf_string(int *i, int *len, va_list string_value);
int printf_percent(int *i, int *len, va_list args);
int printf_int(int *g, int *len, va_list args);
int printf_dec(int *g, int *len, va_list args);
int printf_unsigned_int(va_list args);

#endif
