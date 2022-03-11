#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i, x = 48;

	for (i = 0; i <= 8; i++)
	{
		putchar(x + i);
		putchar(44);
		putchar(10);
	}
	putchar(57);
	return (0);
}
