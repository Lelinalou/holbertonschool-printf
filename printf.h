int _printf(const char *format, ...);

typedef struct print
{
	char *print;
	int (*pf)(va_list)
}print_t