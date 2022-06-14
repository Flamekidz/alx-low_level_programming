#include "main.h"

/**
 * _strlen - interchanges the values of two integers 
 * @s: string input 
 *
 * Return: length of string 
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	return (l);
}
