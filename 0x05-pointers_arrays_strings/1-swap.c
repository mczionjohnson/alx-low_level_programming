#include "main.h"
/**
 * void swap_int - swaps the values
 * of two integers.
 * @a: first int
 * @b: second int.
 * swap: the var used to swap.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
