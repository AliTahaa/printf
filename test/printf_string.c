#include "main.h"
/**
 * printf_string - print a string.
 * @string_value: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list string_value)
{
	char *s;
	int i, len;

	s = va_arg(string_value, char *);
	if (s == NULL)
		s = "(null)";
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);

}
