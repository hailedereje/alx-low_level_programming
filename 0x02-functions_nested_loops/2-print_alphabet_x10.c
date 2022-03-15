#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 **/
void print_alphabet(void)
{
	char c;
	int x;

	for (x = 1; x<=10; x++){
		for (c = 'a'; c <= 'z'; c++){
			_putchar(c);
		}
		_putchar('\n');
	}
}
