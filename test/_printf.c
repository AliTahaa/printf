#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	int len, i;
	va_list args;
	select_fun all[] = {{"%c", printf_char},{"%s", printf_string}};
	

	va_start(args, format);
	if (format == NULL)
		return (-1);
	i = 0, len =  0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				all[0].fun(args);
				i = i + 2;
				len++;
				break;
			case '%':
				_putchar('%');
				i = i + 2;
				len++;
				break;
			case 's':
				len += printf_string(args);
				i = i + 2;
				break;
			default:
				break;
			}
			continue;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
