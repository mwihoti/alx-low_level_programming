#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int lm = 0;
	int x = 0;

	while (*(src + lm) != '\0')
	{
		lm++;
	}
	for ( ; x < lm ; x++)
	{
		dest[x] = src[x];
	}
	dest[lm] = '\0';
	return (dest);
}
