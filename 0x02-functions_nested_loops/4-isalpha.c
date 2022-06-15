#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry Point
 * @c: checking character
 * Return:1if true else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
