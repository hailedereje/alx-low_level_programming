#include "main.h"
/**
 * _islower - checks if it is lower case
 *@c - takes integer
 * Return: 1 if it is lowercase
 *
 * Return: 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
