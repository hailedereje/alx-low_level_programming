#include "main.h"
/**
 * _isupper - checks for upper case charactor
 * @c: takes integer
 * Return: 1 else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
