#include "main.h"
/**
 * print_rev - Entry Point
 * @s : the reversed string
 * Retrun:void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
