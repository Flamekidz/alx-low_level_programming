#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: print_alphate function that prints
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch;

	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
