i#include <stdio.h>

/**
 * puts2 - function
 * @str: ptr
 */

void puts2(char *str)
{
	int cnt = 0;

	while (*str)
	{
		if (cnt % 2 == 0)
			putchar(*str);
		cnt++;
		str++;
	}
	putchar('\n');
}
