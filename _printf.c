#include "main.h"
/**
 * getFormat_ID - gets format function address
 * @format: format identifier
 * Return: returns a function pointer
*/
int (*getFormat_ID(const char *format))(va_list)
{
	int i;
	convert identifier[] = {
		{"c", char_ID},
		{"s", string_ID},
		{"i", integer_ID},
		{"d", decimal_ID},
		{"b", binary_ID},
		{NULL, NULL}

	};
	i = 0;
	while (identifier[i].a != NULL)
	{
		if (*(identifier[i].a) == *format)
		{
			break;
		}
		i++;
	}
	return (identifier[i].func);
}

/**
 * _printf - function that produces output according to a format
 * @format: formats
 * Return: outputs according to format
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list arg;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				count++, i++;
				continue;
			}
			else
			{
				if (format[i + 1] == '%')
				{
					_putchar('%');
					count++, i += 2;
					continue;
				}
				else
				{
					func = getFormat_ID(&format[i + 1]);
					if (func == NULL)
						return (-1);
					i += 2;
					count += func(arg);
					continue;
				}
			}
			i++;
		}
	}
	va_end(arg);
	return (count);
}
