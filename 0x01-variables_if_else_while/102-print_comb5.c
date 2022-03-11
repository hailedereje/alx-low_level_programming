#include <stdio.h>
/**
 * main - entery point
 *
 * Return: 0 after the function excute
 */
int main(void)
{
	int i = 0, x = 48, j = 0, l, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					putchar(x + i);
					putchar(x + j);
					putchar(32);
					putchar(x + k);
					putchar(x + l);
					if (i != 9 || j != 8)
					{
						
        					putchar(44);
                                        	putchar(32);
					}

					
				}
			}

		}

	}
	putchar(10);
	return (0);
}
