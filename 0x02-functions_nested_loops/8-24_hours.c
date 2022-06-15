#include "main.h"

/**
 * jack_bauer - Entry Point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int x, y;

	x = 0;

	while (x < 24)
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
		_putchar(':');
		_putchar((y / 10) + '0');
		_putchar((y %10) + '0');
		y++;
	}
	x++;
}
