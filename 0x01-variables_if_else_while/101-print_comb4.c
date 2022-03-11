#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int y, i = 0, x = 48, j = 0;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++){
			for (y = j + 1; y <= 9; y++)
			{
				
				putchar(x + i);
				putchar(x + j);
				putchar(x + y);
				if (i != 7 || j != 8 || y != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
