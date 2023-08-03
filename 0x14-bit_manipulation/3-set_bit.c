#include "main.h"

/**
 * set_bit - this will set the sets a bit at the
 *  given index to 1
 * @n: points to the number to be change
 * @index: index of the bit we wish to  to set to 1
 *
 * Return: success is,failure is -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!(index > 63))
		*n = ((1UL << index) | *n);
	else
		return (-1);


	return (1);
}
