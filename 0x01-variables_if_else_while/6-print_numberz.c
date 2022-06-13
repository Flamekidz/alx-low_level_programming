#include<stdio.h>

/**
 * main - Entry Point
 * Description: displays base ten digits less than ten
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
