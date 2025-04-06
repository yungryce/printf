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
	int i, count = 0;
	int (*ptr_select)(va_list) = NULL;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
        	return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (*format == '%')
		{
			ptr_select = selector(format[i + 1]);
			if (format[i + 1] == '\0')
				return (-1);
			else if (ptr_select == NULL)
			{
				count += _putchar(format[i]) + _putchar(format[i + 1]);
				i++;
				continue;
			}
			else
			{
				count += selector(ptr_select)(args);
				i++;
				continue;
			}
		}
		putchar(format[i]);
		count++;
	}
	va_end(args);
	return (count);
}
