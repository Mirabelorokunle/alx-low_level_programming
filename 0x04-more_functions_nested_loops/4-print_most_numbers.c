#include <stdio.h>

/**
 * print_most_numbers - function
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		putchar(c);
	}
	putchar('\n');
}
