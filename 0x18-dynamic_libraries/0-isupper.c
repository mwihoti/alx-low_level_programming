#include "main.h"
#include <stdio.h>

/**
 * _isupper - chaeck if cis upper
 *
 * @c: input for character
 *
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
