#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int o;
	int i;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[o] = src[i];
	o++;
	i++;
	}
	dest[o] = '\0';
	return (dest);
}
