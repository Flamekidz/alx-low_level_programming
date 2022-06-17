#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1, next = 0;

	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
		printf("%i\n", sum);
		return (0);
	}
}
