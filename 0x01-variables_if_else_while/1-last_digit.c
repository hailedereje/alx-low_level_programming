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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %d ", n, "is %d ", n % 10, "and is greater than 5\n");
	else if ((n % 10) == 0)
		printf("Last digit of %d ", n, "is %d ", n%10, "and is 0\n");
	else
		 printf("Last digit of %d ", n, "is %d ", n % 10, "and is less than and not 0");

	return (0);
}
