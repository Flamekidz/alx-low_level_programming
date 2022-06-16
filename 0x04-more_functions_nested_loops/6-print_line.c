 #include "main.h"

/**
 * print_line - Entry Point
 * @n: length
 * Return: length
 */

void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		if (n > 0)
		{
			_putchar('_');
			c++;
		}
		_putchar('\n');
	}
}
