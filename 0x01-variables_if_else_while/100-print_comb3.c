#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i = 0, x = 48, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar(x + i);
			putchar(x + j);
			if (i != 9 || j != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
