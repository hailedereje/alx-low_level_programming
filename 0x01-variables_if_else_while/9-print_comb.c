#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i = 0, x = 48;

	for(i = 0; i <=9; i++)
	{
		putchar(x + i);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
