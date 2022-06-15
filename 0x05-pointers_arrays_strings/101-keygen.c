#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 * Return: 0
 */

int main(void)
{
	int p, all;

	srand(time(NULL));
	all = 0;
	while (all <= 5796)
	{
		p = (rand() % 96);
		all += p;
		printf("%c", p);
	}
	printf("%c", 5796 - all);
	return (0);
}
