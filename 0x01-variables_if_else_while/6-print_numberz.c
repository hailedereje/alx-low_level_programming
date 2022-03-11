#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i, x = 48;

	for (i = 0; i <= 9; i++)
	{
		putchar(x + i);
	}
	putchar(10);
	return (0);
}
