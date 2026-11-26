#include "main.h"

/**
 * print_number - prints an unsigned integer
 * @num: the unsigned integer to print
 * Return: number of characters printed
 */
static int print_number(unsigned int num)
{
	int compteur = 0;

	if (num >= 10)
		compteur = compteur + print_number(num / 10);
	_putchar('0' + num % 10);
	return (compteur + 1);
}
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
/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{

	int n = va_arg(args, int);
	int compteur = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		compteur++;
		num = (unsigned int)(-(n + 1) + 1);
	}
	else
		num = n;
	return (compteur + print_number(num));
}
