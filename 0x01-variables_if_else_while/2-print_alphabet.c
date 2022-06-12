#include<stdio.h>

/**
 * main - Entry Point
 * Description: checks character
 * Return: Always 0 (Success)
 */

int main(void)
{
	char check;

	for (check = 'a'; check <= 'z'; check++)
	{
		putchar(check);
	}
	putchar('\n');
	return (0);
}
