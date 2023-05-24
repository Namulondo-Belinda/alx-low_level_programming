#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this prints the name using pointer to function
 * @name: the string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
