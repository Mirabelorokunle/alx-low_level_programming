#include <stdio.h>
#include "main.h"

/**
 * _abs - function
 * @n: input
 * Return: 0 for succes
 */

int _abs(int n)
{
	int j;

	j = (n < 0) ? (n *= -1) : n;

	return (j);
}
