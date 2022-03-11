#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i, m, x = 97;
	char z;

	for (i = 0; i <= 25; i++)
	{
		m = x + i;
		z = (char)m;
		if (z != 'q' && z != 'e')
		{
			putchar(z);
		}
	}
	putchar(10);
	return (0);
}
