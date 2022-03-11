#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i, x = 97;

	for (i = 0; i <= 25; i++)
	{
		if (putchar(x + i) != 'q' && putchar(x+i) != 'e')
		{
			putchar(x+i);
		}
	}
	putchar(10);
	return (0);
}
