#include "main.h"

/**
 * printf_char - prints a char.
 * @char_value: arguments.
 * Return: 1.
 */
int printf_char(va_list char_value)
{
	_putchar(va_arg(char_value, int));
	return (1);
}
