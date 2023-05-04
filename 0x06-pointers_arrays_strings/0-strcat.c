#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int o;
	int i;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[o] = src[i];
		o++;
		i++;
	}

	dest[o] = '\0';
	return (dest);
}
