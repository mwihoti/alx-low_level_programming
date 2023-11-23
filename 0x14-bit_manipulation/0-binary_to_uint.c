#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of binary chars
 * Return: converted number or 0 if b is NULL or contains invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	int unInt;
        unsigned int convNum = 0;

        if (!b)
                return (0);
        for (unInt = 0; b[unInt]; unInt++)
        {
                if (b[unInt] < '0' || b[unInt] > '1')
                        return (0);
                convNum = 2 * convNum + (b[unInt] - '0');
        }
        return (convNum);
}
