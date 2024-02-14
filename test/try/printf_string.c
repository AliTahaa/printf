#include "main.h"
/**
 * printf_string - print a string.
 * @i: pointer to char
 * @len: the length
 * @string_value: argumen t.
 * Return: the length of the string.
 */

int printf_string(int *i, int *len, va_list string_value)
{
	char *s;
	int j, length;

	s = va_arg(string_value, char *);
	if (s == NULL)
		s = "(null)";
	length = _strlen(s);
	for (j = 0; j < length; j++)
		_putchar(s[j]);
	*i = *i + 2;
	*len = *len + length;
	return (length);

}
