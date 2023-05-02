#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int b  = 0;
	int a;

	while (*s != '\0')
	{
		b++;
		s++;
	}
	s--;
	for (a = b; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

