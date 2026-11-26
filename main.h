#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * struct print - print function
 * @print: the format string
 * @pf: the print function
 */
typedef struct print
{
	char *print;
	int (*pf)(va_list);
} print_t;


int _printf(const char *format, ...);
int print_char(va_list args);
int _putchar(char c);
int(*get_print_functions(char a))(va_list);
int print_str(va_list args);
int print_percent(va_list args);
int print_int(va_list args);




#endif