#include "main.h"

/**
 * rev_string - Function
 * @s: ptr
 */

void rev_string(char *s)
{
	char tmp;
	int cnt = 0, ind;

	while (*s)
	{
		cnt++;
		s++;
	}
	
	for (ind = 0; ind < cnt; ind++)
	{
		cnt--;
		tmp = s[ind];
		s[ind] = s[cnt];
		s[cnt] = tmp;
	}
}
