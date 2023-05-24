#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this prints each array elemeny on a new level
 * @array: the array
 * @size: the number of elements to print
 * @action: the pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
