#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the excution of the function
 */
int main(void)
{
	int n;
	int y, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else
		 printf("Last digit of %d is %d and is less than and not 0", n, x);
	return (0);
}
