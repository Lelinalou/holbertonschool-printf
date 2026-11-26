int(*get_print_functions(char a)(va_list))
{
	print_t prints[] = {
	{"c", print_char},
	{"s", print_str},
	{"d", print_int},
	{"i", print_int},
	{"%", print_percent},
	{NULL, NULL}
	};

	int i = 0;

	while (prints[i].prints != NULL)
	{
		if (a == prints[i].print[0])
			return (prints[i].pf)
		i++;
	}
	return (NULL);

}