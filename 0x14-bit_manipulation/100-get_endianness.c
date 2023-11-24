#include "main.h"

/**
 * get_endianness - Checks  endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int numEndian = 1;
	char *endianType = (char *)&numEndian;

	if (*endianType == 1)
		return (1);

	return (0);
}
