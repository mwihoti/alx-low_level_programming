#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * b: pointer of string chars
 * return: b is NULL or one or more chars in string b
 * 	   otherwise convert number
 */
unsigned int binary_to_uint(const char *b){
	unsigned int unInt = 0, num = 1;
	int intLen;

	if (!b)
		return (0);
	
	for (intLen = 0; b[intLen];)
		intLen++;
	for (intLen -= 1; intLen >= 0;)
	{
		if(b[intLen] != '0' && b[intLen] != '1')
			return (0);

		unInt += (b[intLen] - '0') * num;
		num *= 2;
	}
	return (unInt);
	
}

