#include<stdio.h>

/**
 * main - Entry Point
 * Description: print alphaBET
 * Return: Always 0 (Success)
 */

int main(void)
{
	char check;

	for (check = 'a'; check <= 'z'; check++)
	{
		putchar(check);
	}
	for (check = 'A'; check <= 'Z'; check++)
	{
		putchar(check);
	}
	putchar('\n');
	return (0);
}
