#include <stdio.h>
#include "main.h"

/**
 * _islower - function
 * @c: input
 * Return: 0 for succes
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
