#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string output
 *
 * Return: null
 */

void print_rev(char *s)
{
	int x, y, flamekidz;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	flamekidz = x;
	for (y = flamekidz - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
