#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

typedef struct print
{
	char *print;
	int (*pf)(va_list);
}print_t;


int _printf(const char *format, ...);
int print_char(va_list args);
int _putchar(char c);
int(*get_print_functions(char a))(va_list);




#endif