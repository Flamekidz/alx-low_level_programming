#include<stdio.h>

/**
 * main - Entry Point
 * Description: displays all base 16s
 * Return: Always 0 (Success)
 */

int main(void)
{
	char bas;

	    for (bas = '0'; bas <= '9'; bas++)
	    {
		    putchar(bas);
	    }
	    for (bas = 'a'; bas <= 'f'; bas++)
	    {
		    putchar(bas);
	    }
	    putchar('\n');
	    return (0);
}
