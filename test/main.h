#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct funcs
{
	char *identifier;
	int (*fun)(va_list);
} select_fun;

int _printf(const char * const format, ...);
int _strlen(char *s);
int _putchar(char c);
int printf_char(va_list char_value);
int printf_string(va_list string_value);

#endif
