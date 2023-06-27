#include <stdio.h>
#include "main.h"

/**
 * _puts - function
 * @str: ptr
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
