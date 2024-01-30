#include "main.h"

/**
 * printf_char - prints a char.
 * @i: pointer to char
 * @len: the length
 * @char_value: arguments.
 * Return: 1.
 */
int printf_char(int *i, int *len, va_list char_value)
{
	_putchar(va_arg(char_value, int));
	*i = *i + 2;
	*len = *len + 1;
	return (1);
}
