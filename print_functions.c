#include "main.h"
/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_str - prints a string
 * @args: va_list containing the string to print
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int len = 0;
	
	if (s == NULL)
			s = "(null)";

	while (s[len] != '\0')
	{
		_putchar(s[len]);

		len++;
	}
	return (len);
}
/**
 * print_percent - prints a percent sign
 * @args: va_list (not used)
 * Return: number of characters printed (always 1)
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}