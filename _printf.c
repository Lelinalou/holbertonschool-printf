#include "main.h"

int _printf(const char *format, ...)
{
	int j = 0, count = 0;
	int (*pf)(va_list);	
	va_list args;
	va_start(args, format);


	if (format == NULL)
		return (-1);
	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			pf = get_print_functions(format[j + 1]);
			if (pf != NULL)
				count = count + pf(args);
			else
			{
				_putchar('%');
				_putchar(format[j + 1]);
				count = count + 2;
			}
			j = j + 2;
		}
		else
		{
			_putchar(format[j]);
			count++;
			j++;
		}	
	}
	va_end(args);
	return (count);
}
