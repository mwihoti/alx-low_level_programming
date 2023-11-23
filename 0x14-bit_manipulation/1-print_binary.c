#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints  binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int binary, binaryNumber = 0;
	unsigned long int new;

	for (binary = 63; binary >= 0; binary--)
	{
		new = n >> binary;
		if (new & 1)
		{
			_putchar('1');
			binaryNumber++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
