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

	if (format == NULL)
		return (-1);
	va_start(args, format);
	i = 0, len =  0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				printf_char(&i, &len, args);
				break;
			case '%':
				printf_percent(&i, &len, args);
				break;
			case 's':
				printf_string(&i, &len, args);
				break;
			case 'i':
				printf_int(&i, &len, args);
				break;
			case 'd':
				printf_dec(&i, &len, args);
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
