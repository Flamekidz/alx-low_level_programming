#include "main.h"

/**
 * rev_string - function that reverses the string
 * @s: string output
 *
 * Return: null
 */

void rev_string(char *s)
{
	char tonight;
	int x, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}
	len2 = len1 - 1;
	for (x = 0; x < len1 / 2; x++)
	{
		tonight = s[x];
		s[x] = s[len2];
		s[len2--] = tonight;
	}
}
