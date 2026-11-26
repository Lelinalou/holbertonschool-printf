int _printf(const char *format, ...)
{
	int j = 0;
	va_list args;
	va_start(args, format);

	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			f = get_percent_functions(format[j + 1])
			if (f == NULL)
				count = count + f(args);
			j = j + 2;
		}
		_putchar(format[j]);
		count++;
		j++;
	}
	va_end(args);
	return (count);
}
