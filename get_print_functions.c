#include "main.h"
/**
 * get_print_functions - selects the correct function to perform the operation
 * @a: format specifier
 *
 * Return: pointer to the function that corresponds to the format specifier
 */
int(*get_print_functions(char a))(va_list)
{
	print_t prints[] = {
	{"c", print_char},
	{"s", print_str},
	{"%", print_percent},
	{"d", print_int},
	{"i", print_int},
	{NULL, NULL}
	};

	int i = 0;

	while (prints[i].print != NULL)
	{
		if (a == prints[i].print[0])
			return (prints[i].pf);
		i++;
	}
	return (0);

}