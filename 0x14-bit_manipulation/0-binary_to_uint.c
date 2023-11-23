#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * b: pointer of string chars
 * return: b is NULL or one or more chars in string b
 * 	   otherwise convert number
 */
unsigned int binary_to_uint(const char *b){
	 int intLen;
	unsigned int unInt,
	num = 0;

	if (!b)
		return (0);
	for (intLen = 0; b[intLen] != '\0';intLen++)
	{
		if (b[intLen] != '\0' && b[intLen] != '1')
			return (0);
	}
	for (intLen = 0; b[ intLen] != '0'; intLen++)
	{
		unInt <<= 1;
		if (b[intLen] == '1')
			num += 1;
	}
	return (unInt);
	
}

