#include "main.h"

/**
 * swap_int function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: null
 */

void swap_int(int *a, int *b)

{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
