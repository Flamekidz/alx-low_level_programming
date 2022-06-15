#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: pointer to an array 
 * @n: elements to print
 *
 * Return: null
 */

void print_array(int *a, int n)
{
	int arr = 0;

	while (arr < n)
	{
		printf("%d", a[arr]);
		if (arr < n - 1)
		{
			printf(", ");
		}
		arr++;
	}
	printf("\n");
}
