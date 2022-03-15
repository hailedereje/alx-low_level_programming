#include "main.h"
/**
 * print_to_98 - the function
 * @n: integer
 * void - no return
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
