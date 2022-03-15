#include "main.h"
/**
 * print_sign - prints 1 if n>0, and prints 0 if it is equal to 0, or -1 if it less than 0
 * @n: takes in integer
 * Return: 1 if > 0 , 0 if = 0, or -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

