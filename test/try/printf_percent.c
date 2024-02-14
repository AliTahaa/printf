#include "main.h"
/**
 * printf_percent - prints the percent.
 * @i: pointer to char
 * @len: the length
 * @args: argument to print
 * Return: 1.
 */
int printf_percent(int *i, int *len, va_list args)
{
	(void)args;
	_putchar('%');
	*i = *i + 2;
	*len = *len + 1;
	return (1);
}
