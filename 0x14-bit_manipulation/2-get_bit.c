#include "main.h"

/**
 * get_bit - takes the value of a bit of index in a decimal number be return
 * @n: search for index or number or integer
 * @index: number of bit of index(s)
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int bit_values;

        if (index > 63)
                return (-1);
	bit_values = (n >> index) & 1;
	return (bit_values);
}
