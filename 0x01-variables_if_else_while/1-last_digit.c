#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
/**
 * main - entery point
 *
 * return: 0 after the excution of the function
 */
int main(void)
{
	int n;
	int y, x = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 0)
		y = x;
	else
		y = -1 * x;
	if (y > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	else if (y == 0)
		printf("Last digit of %d is %d and is 0\n", n, y);
	else
		 printf("Last digit of %d is %d and is less than and not 0", n, y);

	return (0);
}
