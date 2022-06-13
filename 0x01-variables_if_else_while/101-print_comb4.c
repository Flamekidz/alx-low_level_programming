#include<stdio.h>

/**
 * main - Entry Point
 * Description: displays the triple combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)

	{
		for (y = 49; y < 58; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
