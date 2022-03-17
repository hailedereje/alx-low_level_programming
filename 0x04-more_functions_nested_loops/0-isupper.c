#include "main.h" 
/**
 * _isupper - checks for upper case charactor
 * @c: takes integer
 * Return: 1 else 0
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
