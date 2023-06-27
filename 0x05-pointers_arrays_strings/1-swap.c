#include <stdio.h>

/**
 * swap_int - function
 * @a: ptr1
 * @b: ptr2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
