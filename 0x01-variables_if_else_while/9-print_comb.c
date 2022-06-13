#include<stdio.h>

/**
 * main - Entry Point
 * Description: displays single digit combination
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sd;

	for (sd = 48; sd < 58; sd++)
	{
		putchar(sd);
		if (sd != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
