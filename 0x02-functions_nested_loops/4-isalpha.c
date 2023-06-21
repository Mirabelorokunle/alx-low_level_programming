#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function
 * @c: input
 * Return: 0 for succes
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
