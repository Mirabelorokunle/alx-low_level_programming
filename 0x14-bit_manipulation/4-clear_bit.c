#include "main.h"

/**
 * clear_bit - this will sets the val of thr given bit
 * to the val 0
 * @n: points to the number to swap
 * @index: index of the bit we wish t clear to clear
 *
 * Return: success is 1 and sfailure is -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!(index > 63))
	{
		*n = (~(1UL << index) & *n);
	}
	else
		return (-1);


	return (1);
}
