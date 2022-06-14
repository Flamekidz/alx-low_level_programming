#include "main.h"

/**
 * _puts - prints a string,a new line,to stdout
 * @s: string input
 *
 * Return: null
 */

void _puts(char *s)
{
	int c = 0;

	while (s[c])
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
