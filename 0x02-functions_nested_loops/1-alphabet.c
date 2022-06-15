#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: function that prints alphabet in lower case then a line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
