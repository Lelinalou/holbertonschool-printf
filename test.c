#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Unsigned hexadecimal:[%%]\n");
	printf("Unsigned hexadecimal:[%%]\n");
	return (0);
}