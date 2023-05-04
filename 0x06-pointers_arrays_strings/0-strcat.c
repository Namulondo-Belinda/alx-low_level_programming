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
	int i;
	int y;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}

	dest[i] = '\0';
	return (dest);
}
