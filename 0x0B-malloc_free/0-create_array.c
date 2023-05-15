#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an  array of size size and assign it char c
 * @size: is the size of the array
 * @c: is the char to assign
 * Description: create an array of size size and assign it the  char c
 * Return: is the pointer to the array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
