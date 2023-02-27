#include "main.h"
/**
 * main - length of a string
 * @s: char
 * Return: length
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
