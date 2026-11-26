#include "main.h"

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}

int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int len = 0;
	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	return(len);
}