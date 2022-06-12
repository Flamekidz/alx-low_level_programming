#include<stdio.h>

/**
 * main - Entry Point
 * Description: displays the lowercase letters except for e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
