#include<stdio.h>

/**
 * main - Entry Point
 * Description: Except e_q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char check;

	for (check = 'a'; check <= 'z'; check++)
	{
		if (check == 'e' || check == 'q')
		{
			continue;
		}
		putchar(check);
	}
	putchar('\n');
}
