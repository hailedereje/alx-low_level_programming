#include "main.h"
/**
 * _abs - return absolut value of n
 * @n : integer
 * Return: the +ve or 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}

