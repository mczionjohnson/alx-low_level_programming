#include "main.h"
/**
 * print_numbers- prints numbers 0-9.
 * Return: nothing
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
