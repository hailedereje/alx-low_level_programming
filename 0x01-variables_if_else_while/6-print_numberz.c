#include <stdio.h>
/**
 *  main - Entery Point
 *  Return: 0(Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
