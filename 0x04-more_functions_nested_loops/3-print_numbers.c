#include "main.h"

/**
 * print_numbers - Entry Point
 * description: Function prints numbers
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		{
			_putchar(x + '0');
		}
		putchar('\n');
	}
}
