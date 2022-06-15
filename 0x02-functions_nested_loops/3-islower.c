#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry Point
 * @c: character inspected
 * Return: 1 if true else 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
