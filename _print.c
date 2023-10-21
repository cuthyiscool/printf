#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string to print.
 *
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
	int format_count;
	va_list args;

	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_start(args, format);
	format_count = functions_handler(format, args);
	va_end(args);

	return (format_count);
}
