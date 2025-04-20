#include "main.h"

/**
 * _printf - a function that prints anything
 * @format: known last arg count for iteration
 * @...: iterator args
 *
 * Return: int
*/

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int printed_chars = 0;

	va_list args;

	arr_printf funcs[] = {
		{"c", print_char}, {"s", print_string},
		{"d", print_decimal}, {"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned}, {"o", print_octal},
		{"x", print_hex_lower}, {"X", print_hex_upper},
		{"S", print_ascii_hex},
		{"p", print_pointer}
	};

	size_t count = sizeof(funcs) / sizeof(funcs[0]);

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
        	return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	if (!format)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == '%')
			{
				_putchar('%');
				printed_chars++;
			}
			else
			{
				for (i = 0; i < count; i++)
				{
					if (*format == *(funcs[i].c))
					{
						printed_chars += funcs[i].f(args);
						break;
					}
				}
				if (i == count)
				{
					_putchar('%');
					_putchar(*format);
					printed_chars += 2;
				}
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
