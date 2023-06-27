#include <stdio.h>
#include "main.h"
/**
 * print_rev - function
 * @s: ptr
 * return: 0
 */
void print_rev(char *s)
{
	char *ns = s;
	int cnt = 0, ind;

	while (*s)
	{
		cnt++;
		s++;
	}

	for (ind = cnt - 1
