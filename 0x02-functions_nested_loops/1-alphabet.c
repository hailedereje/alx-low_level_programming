#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 1 if the condition meet else 0
 */
void print_alphabet(void)
{
	int x = 97, i;
	for (i = 0; i<=25; i++)
	{
		putchar(x + i);
		putchar(10);
	}
}
int main()
{
	print_alphabet();
	return (0);
}
