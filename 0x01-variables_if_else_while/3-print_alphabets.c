#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i, x = 97, y = 65;

	for (i = 0; i <= 25; i++)
	{
		putchar(x + i);
	}
	for (i = 0; i <= 25; i++)
        {
                putchar(y + i);
        }

	putchar(10);
	return (0);
}
