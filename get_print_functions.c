int(*get_print_functions(char c)(va_liste))
{
	print_t prints[] = {
	{"%c", print_char},
	{"%s", print_str},
	{"%d", print_int},
	{"%i", print_int},
	{"%%", print_percent},
	{NULL, NULL}
	};







}