#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function
 * Return: 0 for succes
 */

void print_alphabet(void)
{
	char num;

	for (num = 'a'; num <= 'z'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
