#include "main.h"

/**
 * binary_to_uint - this program will convert a bin or base2 number
 * to unsigned integer
 * @b: the string containing bin or base2 number
 *
 * Return: thew convertion
 */
unsigned int binary_to_uint(const char *b)
{
	int nuM;
	unsigned int decimalvall = 0;

	if (!b)
		return (0);
	else
	{
		for (nuM = 0; b[nuM]; nuM++)
		{
			if (b[nuM] < '0' || b[nuM] > '1')
				return (0);
			decimalvall = 2 * decimalvall + (b[nuM] - '0');
		}
	}




	return (decimalvall);
}
