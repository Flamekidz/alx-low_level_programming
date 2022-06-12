#include<stdio.h>

/**
 * main - Entry Point
 * Description: display characters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char check;

	for (check = 'a'; check <= 'z'; check++)
		for (check = 'A'; check <= 'Z'; check++)
		{
			putchar(check);
		}
	putchar('\n');
	return (0);
}
