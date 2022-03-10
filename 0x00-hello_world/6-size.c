#include <stdio.h>
/**
 * main - entery point 
 *
 * Return: 0 printing after the function
 */
int main(void)
{
	int y;
	long int z;
	char x;
	long long int a;
	float b;
	printf("Size of a char: %d",sizeOf(x));
	printf("Size of a int: %d",sizeOf(y));
	printf("Size of a long int: %d",sizeOf(z));
	printf("Size of a long long int: %d",sizeOf(a));
	printf("Size of a float: %d",sizeOf(b));
	return (0);
}
