#include "main.h"
/**
 * print_last_digit - returns the laast digit of the number
 * @n - takes integer
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = -1 * x;
	}
	_putchar(x + '0');
	return (x);
}
