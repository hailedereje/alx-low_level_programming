#include "main.h"
/**
 * print_last_digit - returns the laast digit of the number
 * @n - takes integer
 * Return: the last digit
 */
int print_last_digit(int n)
{	_putchar((n % 10) + '0');
	return (n % 10);
}
