#include "main.h"

/**
 * puts2 - function that prints strings in even reversal
 * @s: string output
 *
 * Return: null
 */

void puts2(char *s)
{
	int j=0;

	while (s[j])
	{
		if (j % 2 == 0)
		{
			_putchar(s[j]);
			j++;
		}
		_putchar('\n');
	}
}
